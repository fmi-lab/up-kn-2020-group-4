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

char* fixStr(char* text) {
    int index = 0;
    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] == ' ') {
        	bool isFirstSymbolSpace = false;
        	if (i == 0) {
        		isFirstSymbolSpace = true;
        	}

            while(text[i+1] == ' ') {
                i++;
            }
            if (isFirstSymbolSpace) {
            	i++;
            }
        }

		text[index++] = text[i];
    }
    text[index++] = '\0';
    return text;
}

void printStr(char* str) {
	for (int i = 0; i < strlen(str); i++) {
    	cout << str[i];
    }
}

int main() {
	char endingSymbol = '\n';
	char* text = insertText(endingSymbol);

    fixStr(text);
    printStr(text);
	
	return 0;
}