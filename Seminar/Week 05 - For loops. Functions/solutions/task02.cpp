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
	for (int i = 1; i <= num; i++) {
		int ai = i*i + 3*i;
		cout << "i: " << i << " = " << ai << endl;
	}

	return 0;
}