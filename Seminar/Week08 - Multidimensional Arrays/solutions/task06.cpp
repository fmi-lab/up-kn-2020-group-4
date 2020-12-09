#include <iostream>
using namespace std;

const size_t MAX_ARR_SIZE = 100;

int main() {

	int n = 0;
	cout << "n = ";
	cin >> n;
	int arr[MAX_ARR_SIZE][MAX_ARR_SIZE] = {};

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}


    return 0;
}