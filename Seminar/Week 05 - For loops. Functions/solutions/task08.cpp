#include <iostream>
#include <cmath>
using namespace std;

int getNumber() {
	int num = 0;
	cout << "Number: ";
	cin >> num;
	return num;
}

int fact(int num) {
	int factNum = 1;

	for (int i = 2; i <= num; i++) {
		factNum *= i;
	}

	return factNum;
}

int main() {
		int num = getNumber();
		int x = getNumber();
		double res = 1.0;

		for (int i = 1; i <= num; i++) {
			res += (pow(x, i)/ fact(i));
		}

		cout << res << endl;

	return 0;
}

