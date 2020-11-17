#include<iostream>
using namespace std;

int main() {

	int num = 0, counter = 0;
	cout << "Number: ";
	cin >> num;

	while (num) {
		num /= 10;
		counter++;
	}
	cout << "Digit`s count: " << counter << endl;

	return 0;
}