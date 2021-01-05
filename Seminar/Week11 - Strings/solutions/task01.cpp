#include <iostream>
using namespace std;

const size_t SIZE = 256;

void resize(char* &str, size_t& size) {
	char* oldStr = str;
	str = new char[size*2];

	for (int i = 0; i < size; i++) {
		str[i] = oldStr[i];
	}
	size *= 2;
	delete[] oldStr;
}

char* insertText(size_t &size, size_t &counter, char endingSymbol) {
	size = 2;
	counter = 0;
	char* text = new char [size]{};

	cout << "Insert text: " << endl;
	char symbol;

	do {
    	cin.get(symbol);
    	if (counter >= size) {
        	resize(text, size);
        }
        text[counter++] = symbol;
    } while (symbol != endingSymbol);

    return text;
}

int main() {
	size_t size, counter;
	char endingSymbol = '!';
	char* text = insertText(size, counter, endingSymbol);
	int symbols[SIZE] = {};


    for (int i = 0; text[i] != endingSymbol; i++) {
        for (int j = 0; j < SIZE; j++) {
            if ((int) text[i] == j) {
                symbols[j]++;
            }
        }
        cout << text[i];
    }
    cout << endl;


    for (int i = 0; i < SIZE; i++){
        if (symbols[i] != 0) {
            cout << (char) i << "  " << symbols[i] << endl;
        }
    }
	return 0;
}