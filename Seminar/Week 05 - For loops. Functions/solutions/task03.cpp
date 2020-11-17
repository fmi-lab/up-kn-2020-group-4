#include <iostream>
using namespace std;

int getNumber() {
	int num = 0;
	cout << "Number: ";
	cin >> num;
	return num;
}

int main() {
	
	int num = getNumber();

	for (int i = 0; i < num; i++) {
		for (int j = num - i; j >= 1; j--) {
			cout << j << " ";
		}
		cout << endl;
	}

	return 0;
}