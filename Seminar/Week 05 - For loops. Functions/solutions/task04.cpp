#include <iostream>
#include <cmath>
using namespace std;

int getNumber() {
	int num = 0;
	cout << "Number: ";
	cin >> num;
	return num;
}

int main() {

	int num = getNumber();
	int copyNum = num, counter = 0;

	while (copyNum) {
		counter++;
		copyNum /= 10;
	}

	copyNum = num;
	int res = 0;

	while (copyNum) {
		res += pow(copyNum % 10, counter);
		copyNum /= 10;
	}

	if (num == res) {
		cout << "Number is narcistic" << endl;
	} else {
		cout << "Number is not narcistic" << endl;
	}

	return 0;
}
