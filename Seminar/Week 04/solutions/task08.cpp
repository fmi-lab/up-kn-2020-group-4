#include<iostream>
#include<cmath>
using namespace std;

int main() {

	int num = 0, binaryNumber = 0, exponent = 0;
	cout << "Number: ";
	cin >> num;

	int temp = num;
	while (temp) {
		int remainder = temp % 2;
		binaryNumber += remainder * pow(10, exponent);
		temp /=2;
		exponent++;
	}

	cout << "Decimal: " << num << " Binary: " << binaryNumber << endl;

	int sum = 0;
	while (binaryNumber) {
		int lastDigit = binaryNumber % 10;
		sum += lastDigit;
		binaryNumber /= 10; 
	}

	cout << "Sum of digits: " << sum << endl;

	return 0;
}