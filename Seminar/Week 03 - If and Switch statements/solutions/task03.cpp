#include<iostream>
using namespace std;

int main() {

	int n = 0, m = 0;
	cout << "n: ";
	cin >> n ;
	cout << "m: ";
	cin >> m;

	int a = n % 10;
	int b = (n / 10) % 10;
	int c = n / 100;

	if (m == a || m == b || m == c) {
		cout << boolalpha << true << endl;
	} else {
		cout << boolalpha << false << endl;
	}

	return 0;
}