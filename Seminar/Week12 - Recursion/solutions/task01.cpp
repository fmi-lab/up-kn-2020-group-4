#include <iostream>
#include <cstring>
using namespace std;

void resize(char* &str, size_t& capacity) {
	char* oldStr = str;
	str = new char[capacity*2];

	for (int i = 0; i < capacity; i++) {
		str[i] = oldStr[i];
	}
	capacity *= 2;
	delete[] oldStr;
}

char* insertText(char endingSymbol) {
	size_t capacity = 2;
	size_t size = 0;
	char* text = new char [capacity]{};

	cout << "Insert text: " << endl;
	char symbol;
    cin.get(symbol);

	while (symbol != endingSymbol) {
    	if (size >= capacity - 1) {
        	resize(text, capacity);
        }
        text[size++] = symbol;
        cin.get(symbol);
    }
    text[size] = '\0';

    return text;
}

void printText(char* str) {
	if (*str == '\0') {
		cout << endl;
		return;
	}

	cout << *str;
	printText(str + 1);
}

int main() {

	char endingSymbol = '\n';
	char* text = insertText(endingSymbol);
	printText(text);

	return 0;
}