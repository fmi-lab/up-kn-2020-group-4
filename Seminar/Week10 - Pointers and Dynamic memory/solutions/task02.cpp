#include <iostream>
using namespace std;

const int MAX_ARRAY_SIZE = 100;
 
void insertArrayElements(int arr[MAX_ARRAY_SIZE][MAX_ARRAY_SIZE], size_t size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
                cin >> arr[i][j];
        }
    }
}

int* getMainDiagonal(int arr[MAX_ARRAY_SIZE][MAX_ARRAY_SIZE], size_t size) {
    int* diagonal = new int[size];
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i == j) {
                diagonal[i] = arr[i][j];
                break;
            }
        }
    }
    return diagonal;
}

void printDiagonal(int* arr, size_t size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main () {

    size_t size = 0;
    cout << "Size: ";
    cin >> size;
    
    int arr[MAX_ARRAY_SIZE][MAX_ARRAY_SIZE] = {};
    insertArrayElements(arr, size);

    int* diagonal = getMainDiagonal(arr, size);
    printDiagonal(diagonal, size);

    return 0;
}