#include<iostream>
using namespace std;

int main() {
	int number1 = 0, number2 = 0, number3 = 0;
	cout << "Number1: ";
	cin >> number1;
	cout << "Number2: ";
	cin >> number2;
	cout << "Number3: ";
	cin >> number3;

	int max = number1;

	if (max < number2) {
		max = number2;
	}

	if (max < number3) {
		max = number3;
	}

	cout << "Max = " << max << endl;

	return 0;
}