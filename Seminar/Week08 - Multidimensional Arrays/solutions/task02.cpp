#include <iostream>
using namespace std;

const size_t MAX_ARR_SIZE = 1000;

void insertElementsInArray(int arr[], size_t size) {
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
}

int getCountOfConsecutiveNumbers(int arr1[], int arr2[], size_t size1, size_t size2) {
	int count = 0;
	for (int i = 0; i <= size2 - size1; i++) {
			int j = 0;
			while (arr1[j] == arr2[j+i] && (j < size1 - 1)) {
				j++;
			}

			if (arr1[j] == arr2[j+i]) {
				count++;
			}
	}
	return count;
}

int main() {

	size_t size1 = 0, size2 =0;
	int arr1[MAX_ARR_SIZE] = {};
	int arr2[MAX_ARR_SIZE] = {};

	cout << "Size 1: ";
	cin >> size1;
	cout << "Array 1: ";
	insertElementsInArray(arr1, size1);

	cout << "Size 2: ";
	cin >> size2;
	cout << "Array 2: ";
	insertElementsInArray(arr2, size2);

	int count = 0;
	if (size1 <= size2) {
		count = getCountOfConsecutiveNumbers(arr1, arr2, size1, size2);
	} 

	cout << "Count = " << count << endl;

    return 0;
}