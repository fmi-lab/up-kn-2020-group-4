#include <iostream>
#include <cstring>
using namespace std;

bool isEndOfSentence(char symbol) {
    return symbol == '\n' || symbol == '.' || symbol == '!' || symbol == '?';
}

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

char* insertText() {
    size_t size = 2;
    size_t counter = 0;
    char* text = new char [size]{};

    char symbol;
    while (!isEndOfSentence(symbol)) {
        cin.get(symbol);
        if (counter >= size - 1) {
            resize(text, size);
        }
        text[counter++] = symbol;
    }
    text[counter] = '\0';

    return text;
}

char** getWords(char* text, int& wordsCount) {
    wordsCount = 0;
    for (int i = 0; text[i] != '\0'; i++) {

        while (isLetter(text[i])) {
            i++;
        }
        wordsCount++;
    }

    cout << "words count : " << wordsCount<< endl;

    char** words = new char* [wordsCount];
    int currWordLen = 0, currWordStart = 0, j = 0;

    for (int i = 0; text[i] != '\0'; i++) {
        currWordStart = i;
        while (isLetter(text[i])) {
            i++;
            currWordLen++;
        }
        words[j] = new char[currWordLen + 1];
        strncpy(words[j], text + currWordStart, currWordLen);
        words[j][currWordLen] = '\0';
        j++;
        currWordLen = 0;
    }

    return words;
}

void printWords(char** words, int wordsCount) {
    for (int i = 0; i < wordsCount; i++) {
        cout << words[i] << " ";
    }
    cout << endl;
}

int main() {
    cout << "Insert sentence: " << endl;
    char* text = insertText();
    int wordsCount;
    char** words = getWords(text, wordsCount);
    printWords(words, wordsCount);
    
    return 0;
}