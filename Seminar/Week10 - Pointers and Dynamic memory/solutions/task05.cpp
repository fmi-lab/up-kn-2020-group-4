#include <iostream>
using namespace std;

void deleteDynamicArray(int** arr, size_t n) {
    for (int i = 0; i < n; i++) {
        delete[] arr[i];
    }
    delete[] arr;
}

int main () {

    return 0;
}