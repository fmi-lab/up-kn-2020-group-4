#include <iostream>
using namespace std;

void deleteDynamicArray(int** arr, size_t n) {
    for (int i = 0; i < n; i++) {
        delete[] arr[i];
    }
    delete[] arr;
}

int** createDynamicArray(size_t n, size_t m) {
    int** arr = new (nothrow) int* [n];
    if (!arr) {
        return nullptr;
    }

    for (int i = 0; i < n; i++) {
        arr[i] = new (nothrow) int [m];
        if (!arr[i]) {
            cout << " i = " << i;
            deleteDynamicArray(arr, i-1);
            return nullptr;
        }
    }
    
    return arr;
}

bool isNull(int** arr) {
	if (!arr) {
		cout << "array is nullptr" << endl;
		return true;
	}
	return false;
}

void insertDynamicArray(int** arr, size_t n, size_t m) {
	if (isNull(arr)) {
		return;
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
		}
	}
}

void printDynamicArray(int** arr, size_t n, size_t m) {
	if (isNull(arr)) {
		return;
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}

void resizeDynamicArray(int** &arr, size_t n, size_t m, size_t& oldN, size_t& oldM) {
	if (isNull(arr)) {
		return;
	}

	if (n > oldN || m > oldM) {
		cout << "New size is bigger than old size" << endl;
		return;
	}

	if (n == oldN && m == oldM) {
		return;
	}

	int** resizedArr = new int*[n];
	for (int i = 0; i < n; i++) {
		resizedArr[i] = new int[m];
		for (int j = 0; j < m; j++) {
			resizedArr[i][j] = arr[i][j];
		}
	}

	deleteDynamicArray(arr, oldN);
	oldN = n;
	oldM = m;
	arr = resizedArr;
}


const size_t size = 5;

int main() {

	size_t n = 0, m = 0, i = 0, j = 0;
	cout << "n : ";
	cin >> n;
	cout << "m : ";
	cin >> m;

	int** arr2 = createDynamicArray(n, m);
	insertDynamicArray(arr2, n, m);
	printDynamicArray(arr2, n, m);

	cout << "i : ";
	cin >> i;
	cout << "j : ";
	cin >> j;

	resizeDynamicArray(arr2, i, j, n, m);
	printDynamicArray(arr2, n, m);


    return 0;
}