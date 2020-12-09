#include <iostream>
using namespace std;

const size_t MAX_ARR_SIZE = 100;

int main() {

	int n = 10;
	int arr[MAX_ARR_SIZE][MAX_ARR_SIZE] = {};

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			arr[i][j] = i * j;
		}
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}


    return 0;
}