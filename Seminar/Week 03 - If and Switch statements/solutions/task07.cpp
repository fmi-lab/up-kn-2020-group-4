#include<iostream>
using namespace std;

int main() {

	int number = 0;
	cout << "Number: ";
	cin >> number;
	int a = number % 10;
	int c = number / 100;

	if (a == c) { 
		cout << "The number is palindrome" << endl;
	} else {
		cout << "The number is not palindrome" << endl;
	}

	return 0;
}