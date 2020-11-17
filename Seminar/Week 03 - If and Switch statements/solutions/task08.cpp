#include<iostream>
using namespace std;

int main() {

	double a = 0.0, b = 0.0, x = 0.0;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;

	if (a == 0) {
		if (b == 0) {
			cout << "Every x is solution" << endl;
		} else {
			cout << "No solution" << endl;
		}
	} else {
		int res = 0;
		if (b != 0) {
			res = -b/a;
		}

		cout << "x = " << res << endl;
	}

	return 0;
}