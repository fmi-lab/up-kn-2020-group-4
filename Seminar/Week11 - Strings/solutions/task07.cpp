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

void removeWord(char* text, char* word) {
    int textLen = strlen(text);
    int wordLen = strlen(word);

    for (int i = 0; i < textLen; i++) {
        if (strncmp(word, text + i, wordLen) == 0) {
            for (int j = i; j < textLen - wordLen; j++){
                text[j] = text[j + wordLen];
            }
            textLen -= wordLen;
        }
    }
    text[textLen] = '\0';
}

void printStr(char* str) {
    for (int i = 0; i < strlen(str); i++) {
        cout << str[i];
    }
}

int main() {
    cout << "Insert text: " << endl;
    char* text = insertText(true);

    cout << "Insert word: " << endl;
    char* word = insertText(false);
    
    removeWord(text, word);
    printStr(text);
    
    return 0;
}