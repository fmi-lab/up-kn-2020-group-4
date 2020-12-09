#include <iostream>
#include <cmath>
using namespace std;

const size_t MAX_ARR_SIZE = 1000;

int getLenOfNum(int num) {
	int count = 0;
	while(num) {
		count++;
		num /= 10;
	}
	return count;
}


void numToArray(int num, int arr[], int len) {
	for (int i = 0; i < len; i++) {
		int powOf10 = pow(10, len - (i + 1));
		arr[i] = num / powOf10;
		num = num % powOf10;
	}
}

void printArray(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}


int main() {

	int arr[MAX_ARR_SIZE];
	int num = 0;
	cin >> num;
	int len = getLenOfNum(num);

	numToArray(num, arr, len);
	printArray(arr, len);

    return 0;
}