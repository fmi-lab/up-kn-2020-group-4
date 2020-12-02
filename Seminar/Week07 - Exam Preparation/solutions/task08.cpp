#include <iostream>
using namespace std;

const size_t MAX_ARRAY_SIZE = 1000;

void insertArrayElements(int arr[], size_t size) {
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
}

int getLengthOfMaxIncreasingPart(int arr[], size_t size) {
	int maxIncrLen = 1;
	int currIncrLen = 1;

	for (int i = 1; i < size; i++) {

		if (arr[i] < arr[i-1]) {
			if (maxIncrLen < currIncrLen) {
				maxIncrLen = currIncrLen;
			}
			currIncrLen = 1;
		} else {
			currIncrLen++;
		}
	}

	if (maxIncrLen < currIncrLen) {
		maxIncrLen = currIncrLen;
	}

	return maxIncrLen;
}

int main() {

	size_t size = 0;
	cout << "Size: ";
	cin >> size;
	int arr[MAX_ARRAY_SIZE] = {};
	insertArrayElements(arr, size);

	cout << "Length of max increasing part = " << getLengthOfMaxIncreasingPart(arr, size) << endl;

 	return 0;
}