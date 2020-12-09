#include <iostream>
using namespace std;

const size_t MAX_ARR_SIZE = 1000;

size_t myStrLen(char arr[]) {
	int count = 0;

	for (int i = 0; arr[i] != '\0'; i++) {
		count++;
	}
	return count;
}

void myStrCpy(char arr1[], char arr2[]) {
	size_t size2 = myStrLen(arr2);

	for (int i = 0; i < size2; i++) {
		arr1[i] = arr2[i];
	}
}

bool isLowerCase(char symbol) {
	return (symbol >= 'a' && symbol <= 'z');
}

void toUpperCase(char& symbol) {
	symbol = symbol - 'a' + 'A';
}

void printCharArray(char str[]) {
	size_t size = myStrLen(str);

	for (int i = 0; i < size; i++) {
		cout << str[i] << " ";
	}
	cout << endl;
}

int main() {

	char str[MAX_ARR_SIZE] = {};

	cin >> str;
	size_t size = myStrLen(str);

	for (int i = 0; i < size; i++) {
		if (isLowerCase(str[i])) {
			toUpperCase(str[i]);
		}
	}

	printCharArray(str);

    return 0;
}