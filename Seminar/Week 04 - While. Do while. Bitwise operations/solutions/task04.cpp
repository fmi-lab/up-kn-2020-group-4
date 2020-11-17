#include<iostream>
using namespace std;

int main() {

	int num = 0, sum = 0, counter = 1;
	cout << "Number: ";
	cin >> num;

	while (counter < num) {
		if (num % counter == 0) {
			sum += counter;
		}
		counter++;
	}

	if (num == sum) {
		cout << "The number is perfect" << endl;
	} else {
		cout << "The number is not perfect" << endl;
	}

	return 0;
}