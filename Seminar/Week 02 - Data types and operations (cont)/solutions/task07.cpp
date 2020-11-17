#include <iostream>
#include <cmath>
using namespace std;

int main() {

	int number1 = 0, number2 = 0;
	cout << "First number: ";
	cin >> number1;	
	cout << "Second number: ";
	cin >> number2;	
	int cubeNumber = pow((number1 > number2 ? number1 : number2), 3);
	cout << "Cube of bigger number: " << cubeNumber << endl;

	return 0;
}