#include <iostream>
using namespace std;

int main() {

	int facultyNumber = -1;
	cout << "Faculty Number: ";
	cin >> facultyNumber;
	bool isEven = (facultyNumber % 2 == 0);
	cout << "Is even? " << boolalpha << isEven << endl;

	return 0;
}