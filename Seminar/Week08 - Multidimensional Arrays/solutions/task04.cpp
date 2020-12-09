#include <iostream>
using namespace std;

size_t myStrLen(char arr[]) {
	int count = 0;

	for (int i = 0; arr[i] != '\0'; i++) {
		count++;
	}
	return count;
}

void myStrCpy(char arr1[], char arr2[]) {
	size_t size2 = myStrLen(arr2);

	for (int i = 0; i < size2; i++) {
		arr1[i] = arr2[i];
	}
}

int main() {

    return 0;
}