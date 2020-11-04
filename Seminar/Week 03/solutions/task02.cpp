#include<iostream>
using namespace std;

int main() {

	int number = 0;
	cout << "Number: ";
	cin >> number;

	int a = number % 10;
	int b = (number / 10) % 10;
	int c = number / 100;
	int sum = a + b + c;

	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	cout << "Sum of digits = " << sum << endl;

	return 0;
}