#include <iostream>
using namespace std;

const size_t MAX_ARRAY_SIZE = 1000;

void insertArrayElements(int arr[], size_t size) {
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
}

bool isArraySorted(int arr[], size_t size) {
	for (int i = 0; i < size - 1; i++) {
		if (arr[i] > arr[i+1]) {
			return false;
		}
	}

	return true;
}

int main() {

	size_t size = 0;
	cout << "Size: ";
	cin >> size;

	int arr[MAX_ARRAY_SIZE] = {};
	insertArrayElements(arr, size);

	cout << boolalpha << isArraySorted(arr, size) << endl;

 	return 0;
}