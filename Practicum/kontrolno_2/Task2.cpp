/* 

Напишете програма, която въвежда цяло число N, следвано от N на брой двойки думи - всяка двойка се въвежда на отделен ред, а думите в нея са разделени с един или повече интервали.
Думите имат дължина не по-голяма от 100 символа. Тези двойки формират речник.
След това ще се въведе число M, последвано от текст съставен от М произволни символа.
Вашата задача е да “преведете текста” като създадете нов, в който всички думи, които се срещат като първи в някоя двойка от речника, са заменени със съответната втора дума от двойката. В текста думите са разделени от символи, които не са малки или главни букви. При търсенето на думите да се игнорира разликата от малки и главни букви. 
Всички масиви и низове, които използвате, трябва да са заделени с точна големина.

Примерен вход
3
call signal
Came   drove
about not
61
I Got Your Distress Call And Came Here As Soon As I Wanted To

Примерен изходен низ:
I Got Your Distress signal And drove Here As Soon As I Wanted To

 */

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

const int MAX_DICT_SIZE = 100;

int strlen(char word[]) {
    int i = 0;

    while(word[i] != '\0') {
        i++;
    }

    return i;
}

void strcpy(char *source, char *target)
{
    int i = 0;

    while (source[i] != '\0') {
        target[i] = source[i];
        i++;
    }

    target[i] = '\0';
}

bool myEqual(char* word, char* text, int start, int end) {
    int len = strlen(word);

    if (len != end - start) {
        return false;
    }

    for (int i = start; i < end; i++) {
        if (word[i-start] != text[i] && word[i-start] != (text[i] - ('A' - 'a')) && text[i] != (word[i-start] - ('A' - 'a'))) {
            return false;
        }
    }

    return true;
}

void readDict(char* dict[][2], int &n) {
    char tmp[100];

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        int l = strlen(tmp);
        dict[i][0] = new char[l];
        strcpy(tmp, dict[i][0]);

        cin >> tmp;
        l = strlen(tmp);
        dict[i][1] = new char[l];
        strcpy(tmp, dict[i][1]);
    }
}

char* readText(int &m) {

    cin >> m;

    char* text = new char[m + 1];
    cin.ignore();
    cin.getline(text, m + 1);

    return text;
}

int calcDiffLength(char *dict[][2], int n, char *text, int start, int end)
{
    for (int j = 0; j < n; j++)
    {
        if (myEqual(dict[j][0], text, start, end))
        {
            return strlen(dict[j][1]) - strlen(dict[j][0]);
        }
    }

    return 0;
}

void doTranslation(char *dict[][2], int n, char *text, int start, int end, char *newText, int &currPointer)
{
    for (int j = 0; j < n; j++)
    {
        if (myEqual(dict[j][0], text, start, end))
        {
            int tmpLen = strlen(dict[j][1]);
            for (int k = 0; k < tmpLen; k++)
            {
                newText[currPointer] = dict[j][1][k];
                currPointer++;
            }
            newText[currPointer] = ' ';
            currPointer++;
            return;
        }
    }

    for (int k = start; k <= end; k++)
    {
        newText[currPointer] = text[k];
        currPointer++;
    }
}

char* translate(char *dict[][2], int n, char *text, int m) {
    int start = 0;
    int updatedLength = m;
    for (int i = 0; i < m; i++) {
        if ((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z')) {
            continue;
        }

        updatedLength += calcDiffLength(dict, n, text, start, i);
        start = i + 1;
    }

    updatedLength += calcDiffLength(dict, n, text, start, m);

    start = 0;
    char *newText = new char(updatedLength);
    int currPointer = 0;
    for (int i = 0; i < m; i++) {
        if ((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z')) {
            continue;
        }

        doTranslation(dict, n, text, start, i, newText, currPointer);
        start = i + 1;
    }

    doTranslation(dict, n, text, start, m, newText, currPointer);

    newText[currPointer] = '\0';

    return newText;
}

void cleanUp(char *dict[][2], int &n, char *text, char *newText) {
    for (int i = 0; i < n; i++)
    {
        delete[] dict[i][0];
        delete[] dict[i][1];
    }

    delete[] text;
    delete[] newText;
}

int main()
{
    int n, m;
    char* dict[MAX_DICT_SIZE][2];
    char* text;

    readDict(dict, n);
    text = readText(m);

    char *newText = translate(dict, n, text, m);
    cout << newText << endl;

    cleanUp(dict, n, text, newText);
}