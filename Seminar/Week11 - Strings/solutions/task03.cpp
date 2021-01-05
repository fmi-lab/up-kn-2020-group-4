#include <iostream>
#include <cstring>
using namespace std;

bool isLetter(char symbol) {
    return symbol >= 'A' && symbol <= 'z';
}

void resize(char* &str, size_t& size) {
    char* oldStr = str;
    str = new char[size*2];

    for (int i = 0; i < size; i++) {
        str[i] = oldStr[i];
    }
    size *= 2;
    delete[] oldStr;
}

char* insertText(bool isText) {
    size_t size = 2, counter = 0;
    char* text = new char [size]{};

    char symbol;
    cin.get(symbol);
    while (symbol != '\n' && (isText || symbol != ' ')) {
        if (counter >= size - 1) {
            resize(text, size);
        }
        text[counter++] = symbol;
        cin.get(symbol);
    } 

    text[counter] = '\0';

    return text;
}

int getCountOfWord(char* text, char* word) {
    int count = 0;
    for (int i = 0; text[i] != '\0'; i++) {
        int j = 0, index = i;
        if (text[index] == word[j] && (i == 0 || text[i-1] == ' ')) {
            while (text[index] == word[j] && j < strlen(word)) {
                index++;
                j++;
            }

            if (j == (strlen(word)) && !isLetter(text[index])) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    cout << "Insert text: " << endl;
    char* text = insertText(true);

    cout << "Insert word: " << endl;
    char* word = insertText(false);
    
    cout << getCountOfWord(text, word) << endl;
    
    return 0;
}