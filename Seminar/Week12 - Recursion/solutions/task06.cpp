#include <iostream>
#include <cmath>
using namespace std;

bool isPrimeHelper(int num, int i) {

	if (i > sqrt(num)) {
		return true;
	}

	if (num < 2 || num % i == 0) {
		return false;
	}

	return isPrimeHelper(num, i+1);
}

bool isPrime(int num) {
	return isPrimeHelper(num, 2);
}

int main() {

	int num = 0;
	cout << "Number: ";
	cin >> num;

	cout << boolalpha << isPrime(num) << endl;
	
	return 0;
}