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

void sqartOfElementsOnSecondaryDiagonal(int arr[MAX_ARR_SIZE][MAX_ARR_SIZE], size_t size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if ((i + j) == (size - 1)) {
				arr[i][j] *= arr[i][j];
			}
		}
	}
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

	sqartOfElementsOnSecondaryDiagonal(arr, size);
	printArray(arr, size, size);

    return 0;
}