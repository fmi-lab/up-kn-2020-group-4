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

bool isPrimeNumber(int number) {
    if (number <= 1) {
        return false;
    }

    for (int i = number / 2; i >= 2; i--) {
		if (number % i == 0) {
			return false;
		}
	}
	return true;
}

int getCountOfPrimeNumbersOverSecondaryDiagonal(int arr[MAX_ARR_SIZE][MAX_ARR_SIZE], size_t size) {
	int count = 0;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (((i + j) < (size - 1)) && isPrimeNumber(arr[i][j])) {
				count++;
			}
		}
	}
	return count;
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

	int countOfPrimeNumbersOverSecondaryDiagonal = getCountOfPrimeNumbersOverSecondaryDiagonal(arr, size);
	cout << "Count Of Prime Numbers Over Secondary Diagonal = " << countOfPrimeNumbersOverSecondaryDiagonal << endl;

    return 0;
}