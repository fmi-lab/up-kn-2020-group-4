#include<iostream>
using namespace std;

int main() {

	int number = 0;
	cout << "Number: ";
	cin >> number;

	// 2 ways to solve

	// first way:
	switch(number) {
		case 0:
		case 2:
		case 4:
		case 6:
		case 8:
			cout << "The number is even" << endl;
			break;
		case 1:
		case 3:
		case 5:
		case 7:
		case 9:
			cout << "The number is odd" << endl;
			break;
		default:
			cout << "The number is not digit" << endl;

	}

	// second way:
	if (number / 10 > 0) {
		cout << "The number is not digit" << endl;
	} else {
		int isEven = number % 2;
		switch(isEven) {
			case 0:
				cout << "The number is even" << endl;
				break;
			case 1:
				cout << "The number is odd" << endl;
				break;
			default:
				cout << "The number is not digit" << endl;
		}
	}
    
	return 0;
}