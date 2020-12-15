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

bool isEvenNumber(int element) {
	return (element % 2 == 0);
}

int getSumOfAllOddNumbersOverAndOnMainDiagonal(int arr[MAX_ARR_SIZE][MAX_ARR_SIZE], size_t size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (i <= j && !isEvenNumber(arr[i][j])) {
				sum += arr[i][j];
			}
		}
	}
	return sum;
}

int main() {

	int arr[MAX_ARR_SIZE][MAX_ARR_SIZE] = {};
	size_t size = 0;
	
	while(size < 3 || size > 10) {
		cout << "Size must be between 3 and 10:" << endl;
		cin >> size;
	}

	insertElementsInSquartArray(arr, size);
	printArray(arr, size, size);

	int sumOfAllOddNumbersOverAndOnMainDiagonal = getSumOfAllOddNumbersOverAndOnMainDiagonal(arr, size);
	cout << "Sum Of All Odd Numbers Over And On Main Diagonal = " << sumOfAllOddNumbersOverAndOnMainDiagonal << endl;

    return 0;
}