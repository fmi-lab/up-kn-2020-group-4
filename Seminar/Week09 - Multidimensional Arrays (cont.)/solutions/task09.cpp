#include <iostream>
using namespace std;

const size_t MAX_ARR_SIZE = 100;

void insertElementsInSquartArray(int arr[MAX_ARR_SIZE][MAX_ARR_SIZE], size_t size, size_t size2) {
	cout << "Insert Elements: " << endl;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size2; j++) {
			cin >> arr[i][j];
		}
	}
	cout << endl;
}

void printArray(int arr[MAX_ARR_SIZE][MAX_ARR_SIZE], size_t size, size_t size2) {
	cout << "Array: " << endl;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size2; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

void eraseRowK(int arr[MAX_ARR_SIZE][MAX_ARR_SIZE], size_t& n, size_t m, int k) {
	
	for (int i = k; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (i == n - 1) {
				arr[i][j] = 0;
			} else {
				arr[i][j] = arr[i + 1][j];
			}
		}
	}
	n--;
}

int main() {

	int arr[MAX_ARR_SIZE][MAX_ARR_SIZE] = {};
	size_t n = 0, m = 0;
	
	while(n < 1 || n > 10) {
		cout << "N must be between 1 and 10" << endl;
		cin >> n;
	}

	while(m < 1 || m > 20) {
		cout << "M must be between 1 and 20" << endl;
		cin >> m;
	}

	insertElementsInSquartArray(arr, n, m);
	printArray(arr, n, m);

	int k = 0;
	cout << "K = ";
	cin >> k;

	if (k >= 0 && k < n) {
		eraseRowK(arr, n, m, k);
		printArray(arr, n, m);
	} else {
		cout << "K is not in the range 0 to " << n << endl;
	}

    return 0;
}