#include <iostream>
using namespace std;

const size_t MAX_ARR_SIZE = 100;

void insertElementsInSquartArray(int arr[MAX_ARR_SIZE][MAX_ARR_SIZE], size_t size) {
	cout << "Insert Elements: " << endl;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
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

bool hasDigit1(int num) {
	while (num) {
		int ost = num % 10;
		if (ost == 1) {
			return true;
		}
		num /= 10;
	}
	return false;
}

int getProductOfElementsWithDigit1UnderSecondaryDiagonal(int arr[MAX_ARR_SIZE][MAX_ARR_SIZE], size_t size) {
	int product = 1;
	bool hasElementsWithDigit1 = false;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (((i + j) > (size - 1)) && hasDigit1(arr[i][j])) {
				product *= arr[i][j];
				hasElementsWithDigit1 = true;
			}
		}
	}

	return (hasElementsWithDigit1 ? product : 0);
}

int main() {

	int arr[MAX_ARR_SIZE][MAX_ARR_SIZE] = {};
	size_t size = 0;
	
	while(size < 3 || size > 10) {
		cout << "Size must be between 3 and 10" << endl;
		cin >> size;
	}

	insertElementsInSquartArray(arr, size);
	printArray(arr, size, size);

	int productOfElementsWithDigit1UnderSecondaryDiagonal = getProductOfElementsWithDigit1UnderSecondaryDiagonal(arr, size);
	cout << "Product Of Elements With Digit 1 Under Secondary Diagonal = " << productOfElementsWithDigit1UnderSecondaryDiagonal << endl;

    return 0;
}