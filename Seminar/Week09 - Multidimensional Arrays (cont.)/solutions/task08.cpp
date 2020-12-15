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

int getRowWithBiggestSum(int arr[MAX_ARR_SIZE][MAX_ARR_SIZE], size_t size) {
	int biggestSumOfRow = 0;
	int currSumOfRow = 0;
	int row = 0;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			currSumOfRow += arr[i][j];
		}

		if (currSumOfRow > biggestSumOfRow) {
			biggestSumOfRow = currSumOfRow;
			row = i;
		}
		currSumOfRow = 0;
	}
	return row;
}

int getColWithBiggestSum(int arr[MAX_ARR_SIZE][MAX_ARR_SIZE], size_t size) {
	int biggestSumOfCol = 0;
	int currSumOfCol = 0;
	int col = 0;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			currSumOfCol += arr[j][i];
		}

		if (currSumOfCol > biggestSumOfCol) {
			biggestSumOfCol = currSumOfCol;
			col = i;
		}
		currSumOfCol = 0;
	}

	return col;
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

	int rowWithBiggestSumOfElemenst = getRowWithBiggestSum(arr, size);
	int colWithBiggestSumOfElemenst = getColWithBiggestSum(arr, size);

	cout << "Row With Biggest Sum Of Elemenst: " << getRowWithBiggestSum(arr, size) << endl;
	cout << "Col With Biggest Sum Of Elemenst: " << getColWithBiggestSum(arr, size) << endl;

    return 0;
}