#include <iostream>
using namespace std;

void getMinAndMaxDigit(int num, int& min, int& max) {
	while(num) {
		int currDigit = num % 10;
		if (currDigit < min) {
			min = currDigit;
		}

		if (currDigit > max) {
			max = currDigit;
		}
		num /= 10;
	}
}

int main() {

	int num = 0, minDiggit = 9, maxDigit = 0;
	cout << "Number: ";
	cin >> num;

	getMinAndMaxDigit(num, minDiggit, maxDigit);
	cout << "Min = " << minDiggit << ", Max = " << maxDigit << endl;

 	return 0;
}