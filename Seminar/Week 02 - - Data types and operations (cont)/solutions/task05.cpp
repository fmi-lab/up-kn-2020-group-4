#include <iostream>
using namespace std;

int main() {

	int number = 0;
	cout << "Number: ";
	cin >> number;

	bool isMoreThanHundredOrIsDividedByTwo = (number > 100 || number % 2 == 0);
	cout << "Is more than 100 or is divided by 2? " << boolalpha << isMoreThanHundredOrIsDividedByTwo << endl;

	return 0;
}