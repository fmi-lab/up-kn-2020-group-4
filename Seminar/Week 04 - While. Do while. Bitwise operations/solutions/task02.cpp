#include<iostream>
using namespace std;

int main() {

	int num = 0, product = 1;
	cout << "Number: ";
	cin >> num;

	while (num) {
		product *= num;
		
		cout << "Number: ";
		cin >> num;
	}

	cout << "Product = " << product << endl;

	return 0;
}