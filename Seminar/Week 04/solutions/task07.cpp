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

	int i = 0;
	cout << "i = ";
	cin >> i;

	cout << ((num >> i) & 1) << endl;

	return 0;
}