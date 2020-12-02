#include <iostream>
using namespace std;

void printLetters() {
	int letterSize = 26;
	const int size = letterSize;

	for (int i = 0; letterSize > 0; i++) {
		for (int j = 0; j < i+1 && letterSize > 0; j++) {
			char letter = 'A' + (size - letterSize);
			cout << letter << " ";
			letterSize--;
		}
		cout << endl;
	}
}

int main() {

	printLetters();
 
 	return 0;
}