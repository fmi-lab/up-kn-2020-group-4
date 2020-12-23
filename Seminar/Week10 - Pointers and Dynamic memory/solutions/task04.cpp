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

int main () {

    size_t n = 0, m = 0;
    cout << "n: ";
    cin >> n;
    cout << "m: ";
    cin >> m;
    
    int** arr = createDynamicArray(n, m);

    return 0;
}