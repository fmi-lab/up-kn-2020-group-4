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

int sumPrimeNumbers(int a, int b) {
	if (a > b) {
		return 0;
	}

	if (isPrime(a)) {
		return a + sumPrimeNumbers(a+1, b);
	}

	return sumPrimeNumbers(a+1, b);
}

int main() {

	int a = 0, b = 0;
	cout << "a: ";
	cin >> a;

	cout << "b: ";
	cin >> b;

	cout << sumPrimeNumbers(a, b) << endl;
	
	return 0;
}