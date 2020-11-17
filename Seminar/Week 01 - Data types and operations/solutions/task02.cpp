#include <iostream>
using namespace std;

int main() {

	int number1 = 0, number2 = 0, result = 0;

	cout << "Number 1: ";
	cin >> number1;
	cout << "Number 2:";
	cin >> number2;

	result = number1 % number2;
	cout << "The result is " << result << endl;
	
	return 0;
}