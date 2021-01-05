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

char* findLongestWord(char* text) {
    int maxLength = 0, currWordLen = 0, longestWordStart = 0, startIndex = 0;

    for (int i = 0; text[i] != '\0'; i++) {
        startIndex = i;

        while (isLetter(text[i])) {
            currWordLen++;
            i++;
        }

        if (currWordLen > maxLength) {
            longestWordStart = startIndex;
            maxLength = currWordLen;
        }
        currWordLen = 0;
    }

    char* lonegstWord = new char[maxLength + 1];
    strncpy(lonegstWord, text + longestWordStart, maxLength);
    lonegstWord[maxLength] = '\0';
    return lonegstWord;
}

int main() {
    cout << "Insert sentence: " << endl;
    char* text = insertText();

    cout << findLongestWord(text) << endl;

    
    return 0;
}