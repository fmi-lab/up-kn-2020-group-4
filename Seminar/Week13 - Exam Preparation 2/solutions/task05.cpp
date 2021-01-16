#include <iostream>
#include <cstring>
using namespace std;

void resize(char* &str, size_t& size) {
    char* oldStr = str;
    str = new char[size*2];

    for (int i = 0; i < size; i++) {
        str[i] = oldStr[i];
    }
    size *= 2;
    delete[] oldStr;
}

char* insertText(char endingSymbol) {
    size_t size = 2;
    size_t counter = 0;
    char* text = new char [size]{};

    cout << "Insert text: " << endl;
    char symbol;
    cin.get(symbol);

    while (symbol != endingSymbol) {
        if (counter >= size - 1) {
            resize(text, size);
        }
        text[counter++] = symbol;
        cin.get(symbol);
    }
    text[counter] = '\0';

    return text;
}

char* toEnd(char* str, char* subStr) {

    int len = strlen(str);
    char* newStr = new (nothrow) char[len + 1];
    strcpy(newStr, str);

    int normalChars = len;
    for (int i = 0; i < normalChars; i++) {
        for (int j = 0; j < strlen(subStr); j++) {
            if (newStr[i] == subStr[j]) {
                char ch = newStr[i];
                strncpy(newStr+i, newStr+1+i, len-i-1);
                newStr[len - 1] = ch;
                normalChars--;
                i--;
                break;
            }
        }
    } 
    return newStr;
}

int main () {

    char* str = insertText('\n');
    const int size = 4;

    cout << "Insert substring" << endl;
    char subStr[size];
    for (int i = 0; i < size - 1; i++) {
        cin.get(subStr[i]);
    }
    subStr[size - 1] = '\0';

    char* newStr = toEnd(str, subStr);
    cout << newStr;

    return 0;
}