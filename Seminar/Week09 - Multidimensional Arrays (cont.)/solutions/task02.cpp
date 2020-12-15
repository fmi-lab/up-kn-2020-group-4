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

void printElementsOverMainDiagonal(int arr[MAX_ARR_SIZE][MAX_ARR_SIZE], size_t size) {
	cout << "Elements Over Main Diagonal: " << endl;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (i < j) {
				cout << arr[i][j] << " ";
			}
		}
		cout << endl;
	}
	cout << endl;
}

void printElementsUnderMainDiagonal(int arr[MAX_ARR_SIZE][MAX_ARR_SIZE], size_t size) {
	cout << "Elements Under Main Diagonal: " << endl;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (i > j) {
				cout << arr[i][j] << " ";
			}
		}
		cout << endl;
	}
	cout << endl;
}


void printElementsOverSecondaryDiagonal(int arr[MAX_ARR_SIZE][MAX_ARR_SIZE], size_t size) {
	cout << "Elements Over Secondary Diagonal: " << endl;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if ((i + j) < (size - 1)) {
				cout << arr[i][j] << " ";
			}
		}
		cout << endl;
	}
	cout << endl;
}

void printElementsUnderSecondaryDiagonal(int arr[MAX_ARR_SIZE][MAX_ARR_SIZE], size_t size) {
	cout << "Elements Under Secondary Diagonal: " << endl;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if ((i + j) > (size - 1)) {
				cout << arr[i][j] << " ";
			}
		}
		cout << endl;
	}
	cout << endl;
}

int main() {

	size_t size = 0;
	cout << "Size: ";
	cin >> size;

	int arr[MAX_ARR_SIZE][MAX_ARR_SIZE] = {};
	insertElementsInSquartArray(arr, size);
	printArray(arr, size, size);

	printElementsOverMainDiagonal(arr, size);
	printElementsUnderMainDiagonal(arr, size);
	printElementsOverSecondaryDiagonal(arr, size);
	printElementsUnderSecondaryDiagonal(arr, size);

    return 0;
}