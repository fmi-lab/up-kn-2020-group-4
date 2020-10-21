#include <iostream>
using namespace std;

int main() {

	char e = ' ', c = '*', n = '\n';

	cout << e << e << e << e << c << n;
	cout << e << e << e << c << c << c << n;
	cout << e << e << c << c << c << c << c << n;
	cout << e << c << c << c << c << c << c << c << n;
	cout << c << c << c << c << c << c << c << c << c << n;

	return 0;
}