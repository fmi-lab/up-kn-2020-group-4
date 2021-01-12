#include <iostream>
using namespace std;

int getProductOfNaturalNumbersHelper(int start, int n, int k) { 
    if (start > n) {
        return -1;
    }

    if (n - start < k) {
        return start;
    }

    return start * getProductOfNaturalNumbersHelper(start + k, n, k);
}

int getProductOfNaturalNumbers(int n, int k) { 

   return getProductOfNaturalNumbersHelper(1, n, k);
}

int main() {

	int n = 0, k = 0;
	cout << "n: ";
	cin >> n;

	cout << "k: ";
	cin >> k;

	cout << getProductOfNaturalNumbers(n, k) << endl;
	
	return 0;
}