#include<iostream>
using namespace std;

int main() {

	int a = 0, b = 0;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;

	if (a == b) {
		cout << "Figure is square" << endl;
	} else {
		cout << "Figure is rectangle" << endl;
	}

	int p = 2 * (a + b);
	int s = a*b;
	cout << "P = " << p << endl;
	cout << "S = " << s << endl;

	return 0;
}