#include <iostream>
using namespace std;

bool checkIfSumOfDigitsDevidedByFive(int num) {
	int sum = 0;
	while(num) {
		sum += num % 10;
		num /= 10;
	}
	return (sum % 5 == 0);
}

int main() {

	int num = 0;
	cout << "Number: ";
	cin >> num;
	checkIfSumDevidedByFive(num);
	cout << boolalpha << checkIfSumOfDigitsDevidedByFive(num) << endl;

 	return 0;
}