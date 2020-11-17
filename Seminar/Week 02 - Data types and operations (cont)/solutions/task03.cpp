#include <iostream>
using namespace std;

int main() {

	int num1 = 0, num2 = 0;
	cout << "First number: ";
	cin >> num1;
	cout << "Second number: ";
	cin >> num2;
	bool isDouble = (num1 == num2 * 2);
	cout << "Is the first number double the second number? " << boolalpha << isDouble << endl;

	return 0;
}