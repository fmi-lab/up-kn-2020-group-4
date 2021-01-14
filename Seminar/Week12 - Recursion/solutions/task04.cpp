#include <iostream>
using namespace std;

int getSumOfNaturalNumbersHelper(int start, int n, int k) {
    if (start > n) {
    	return 0;
    }

    if (n - start < k) {
        return start;
    }

    return start + getSumOfNaturalNumbersHelper(start + k, n, k);
}

int getSumOfNaturalNumbers(int n, int k) {

   return getSumOfNaturalNumbersHelper(1, n, k);
}

int main() {

	int n = 0, k = 0;
	cout << "n: ";
	cin >> n;

	cout << "k: ";
	cin >> k;

	cout << getSumOfNaturalNumbers(n, k) << endl;
	
	return 0;
}