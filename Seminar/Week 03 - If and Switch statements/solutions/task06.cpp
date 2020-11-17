#include<iostream>
using namespace std;

int main() {

	int number = 0;
	cout << "Number: ";
	cin >> number;

	int a = number % 10;
	int b = (number / 10) % 10;
	int c = number / 100;

	// 2 ways to solve:

	// first way:

	int min = a;
	int middle = b;
	int max = c;

	if (min > max) {
		int tempMax = max;
		max = min;
		min = tempMax;
	}

	if (middle < min) {
		int tempMin = min;
		min = middle;
		middle = tempMin;
	}

	if (middle > max) {
		int tempMax = max;
		max = middle;
		middle = tempMax;
	}

	cout << min << middle << max << endl;

	// second way
	
	if (a < b && a < c) {
		if (b < c) {
			cout << a << b << c << endl;
		} else {
			cout << a << c << b << endl;
		}
	} else if (b < a && b < c) {
		if (a < c) {
			cout << b << a << c << endl;			
		} else {
			cout << b << c << a << endl;
		}
	} else if (c < a && c < b) {
		if (a < b) {
			cout << c << a << b << endl;						
		} else {
			cout << c << b << a << endl;			
		}
	}

	return 0;
}