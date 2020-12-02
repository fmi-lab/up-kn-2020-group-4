#include <iostream>
using namespace std;

bool isPowOfTwo(int num) {
	int count = 0;
	while(num > 1) {
		if (num % 2 != 0) {
			return false;
		}
		num /= 2;
		count++;
	}

	cout << "2^" << count << endl;
	return true;
}

int main() {

	int num = 0;
	cout << "Number: ";
	cin >> num;

	cout << boolalpha << isPowOfTwo(num) << endl; 

 	return 0;
}