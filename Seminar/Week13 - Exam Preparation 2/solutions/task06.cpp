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

void removeDuplicatedSymbols(char*& str) {
    int len = strlen(str);
    for(int i = 1; i < len;) {
        if(str[i] == str[i - 1]) {
            strncpy(str+i, str+i+1, len - i - 1);
            len--;
        }
        else {
            i++;
        }
    }
    str[len]='\0';
}

int main () {

    char* str = insertText('\n');
    const int size = 4;

    removeDuplicatedSymbols(str);
    cout << str;
    
    return 0;
}