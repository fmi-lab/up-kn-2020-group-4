#include <iostream>
using namespace std;

const size_t MAX_ARRAY_SIZE = 1000;

void insertArrayElements(int arr[], size_t size) {
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
}

int getSumOfEvenNumber(int arr[], size_t size) {
	int sum = 0;
	for (int i = 0; i < size; ++i) {
		if (arr[i] % 2 == 0) {
			sum += arr[i];
		}
	}
	return sum;
}

int main() {

	size_t size = 0;
	cout << "Size: ";
	cin >> size;
	int arr[MAX_ARRAY_SIZE] = {};

	insertArrayElements(arr, size);
	cout << "Sum = " << getSumOfEvenNumber(arr, size) << endl;

 	return 0;
}