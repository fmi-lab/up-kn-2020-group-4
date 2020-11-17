#include<iostream>
using namespace std;

int main() {

	int num = 0, decimalNumber = 0, base = 1;
	cout << "Number: ";
	cin >> num;

	int temp = num;
	while (temp) {
		int lastDigit = temp % 10;
		decimalNumber += lastDigit * base;
		base *= 2;
		temp /= 10;
	}

	cout << "Binary: " << num << " Decimal: " << decimalNumber << endl;

	return 0;
}