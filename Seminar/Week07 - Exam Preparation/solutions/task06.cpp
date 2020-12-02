#include <iostream>
using namespace std;

const size_t MAX_ARRAY_SIZE = 1000;

void insertArrayElements(int arr[], size_t size) {
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
}

int getCountOfEqualsPositions(int arr1[], int arr2[], size_t size1, size_t size2) {
	size_t size = 0;
	if (size1 > size2) {
		size = size2;
	} else {
		size = size1;
	}

	int count = 0;
	for (int i = 0; i < size; i++) {
		if (arr1[i] == arr2[i]) {
			count++;
		}
	}
	return count;
}

int getCountOfEqualsValues(int arr1[], int arr2[], size_t size1, size_t size2) {
	int count = 0;
	for (int i = 0; i < size1; i++) {
		for (int j = 0; j < size2; j++) {
			if (arr1[i] == arr2[j]) {
				count++;
			}
		}
	}
	return count;
}

int main() {

	size_t size1 = 0, size2 = 0;
	cout << "Size1: ";
	cin >> size1;
	cout << "Size2: ";
	cin >> size2;
	int arr1[MAX_ARRAY_SIZE] = {};
	int arr2[MAX_ARRAY_SIZE] = {};

	insertArrayElements(arr1, size1);
	insertArrayElements(arr2, size2);

	cout << "Count of equals positions = " << getCountOfEqualsPositions(arr1, arr2, size1, size2) << endl;
	cout << "Count of equals values = " << getCountOfEqualsValues(arr1, arr2, size1, size2) << endl;

 	return 0;
}