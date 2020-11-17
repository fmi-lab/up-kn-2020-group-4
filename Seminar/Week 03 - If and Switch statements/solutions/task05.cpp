#include<iostream>
using namespace std;

int main() {

	int number = 0;
	cout << "Number: ";
	cin >> number;

	if (number > 2211 && number < 8999) {
		int m = 0;
		cout << "m: ";
		cin >> m;
		int a = number % 10;
		int b = (number / 10) % 10;
		int c = (number / 100) % 10;
		int d = number / 1000;

		int counter = 0;
		if (a == m) {
			counter++;
		} 

		if (b == m) {
			counter++;
		}
		if (c == m) {
			counter++;
		}
		if (d == m) {
			counter++;
		}

		cout << counter << endl;
 	} else {
		cout << "Error. The number is not between 2211 and 8999" << endl;
	}

	return 0;
}