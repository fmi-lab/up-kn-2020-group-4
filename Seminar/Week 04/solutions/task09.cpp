#include<iostream>
using namespace std;

int main() {

	int number1 = 0, number2 = 0, selectedNumber = 0;
	cout << "Number1: ";
	cin >> number1;
	cout << "Number2: ";
	cin >> number2;

	do {
		cout <<"Please make a selection: \n";
    	cout << "1) Bitwise AND\n";
    	cout << "2) Bitwise OR\n";
    	cout << "3) Bitwise XOR\n";
    	cout << "4) Left shift\n";
    	cout << "5) Right shift\n";
    	cin >> selectedNumber;
	} while(selectedNumber != 1 && selectedNumber != 2 && 
			selectedNumber != 3 && selectedNumber != 4 && 
			selectedNumber != 5);

	int result = 0; 
	if (selectedNumber == 1) {
		result = number1 & number2;
	} else if (selectedNumber == 2) {
		result = number1 | number2;
	} else if (selectedNumber == 3) {
		result = number1 ^ number2;
	} else if (selectedNumber == 4) {
		result = number1 << number2;
	} else {
		result = number1 >> number2;
	}

	cout << "Result: " << result <<endl;

	return 0;
}