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

char* insertWord() {
    size_t size = 2;
    size_t counter = 0;
    char* text = new char [size]{};

    char symbol;
    while (isLetter(symbol)) {
        cin.get(symbol);
        if (counter >= size - 1) {
            resize(text, size);
        }
        text[counter++] = symbol;
    }
    text[counter] = '\0';

    return text;
}

void printNewWord(char* longerWord, char* shorterWord, int magicNumber) {
    for (int i = 0; i < magicNumber; i++) {
        cout << shorterWord[i];
    }
    for (int i = magicNumber; longerWord[i] != '\0'; i++) {
        cout << longerWord[i];
    }
}

bool isMagicNumberBiggerThanSizeOfShorterWord(size_t size, int magicNumber) {
    if (size < magicNumber) {
        cout << "Magic number is bigger than size of shorter word." << endl;
        return true;
    }
    return false;
}

void uniteWords(char* word1, char* word2, int magicNumber) {
    size_t size1 = strlen(word1);
    size_t size2 = strlen(word2);

    if (size1 < size2) {
        if (isMagicNumberBiggerThanSizeOfShorterWord(size1, magicNumber)) {
            return;
        }
        
        cout << "Length = " << size2 << endl;
        printNewWord(word2, word1, magicNumber);
    } else if (size1 > size2) {
        if (isMagicNumberBiggerThanSizeOfShorterWord(size2, magicNumber)) {
            return;
        }

        cout << "Length = " << size1 << endl;
        printNewWord(word1, word2, magicNumber);
    } else {
        cout << "The words are with equal size" << endl;
    }
}


int main() {
    cout << "Insert word 1: " << endl;
    char* word1 = insertWord();

    cout << "Insert word 2: " << endl;
    char* word2 = insertWord();

    int magicNumber = 0;
    cout << "Insert magic number: ";
    cin >> magicNumber;

    uniteWords(word1, word2, magicNumber);

    
    return 0;
}