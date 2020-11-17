#include <iostream>
using namespace std;

int main() {

	int number = 0;
	cout << "Number: ";
	cin >> number;
	bool isMoreThanTenAndIsDividedByFive = (number > 10 && number % 5 == 0);
	cout << "Is more than 10 and is divided by 5? " << boolalpha << isMoreThanTenAndIsDividedByFive << endl;

	return 0;
}