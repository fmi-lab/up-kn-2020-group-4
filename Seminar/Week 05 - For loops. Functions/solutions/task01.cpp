#include <iostream>
using namespace std;

int main() {
	
	for (int i = 100; i <= 999; i++) {
		int a = i % 10;
		int b = (i / 10) % 10;
		int c = i / 100;

		if (a != b && b != c && c != a) {
			cout << i << endl;
		}
	}

	return 0;
}