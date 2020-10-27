#include <iostream>
using namespace std;

int main() {

	int number = 0;
	cout << "Number: ";
	cin >> number;

	bool isMoreThanZeroAndIsDividedBySevenOrNine = number > 0 && (number % 7 == 0 || number % 9 == 0);
	cout << "Is more than 0 and is divided by 7 or 9? " << boolalpha << isMoreThanZeroAndIsDividedBySevenOrNine << endl;

	return 0;
}