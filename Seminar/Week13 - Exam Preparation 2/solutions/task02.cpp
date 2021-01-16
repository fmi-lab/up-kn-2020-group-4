#include <iostream>
using namespace std;

void deleteDynamicArray(int** arr, size_t size) {
    for (int i = 0; i < size; i++) {
        delete[] arr[i];
    }

    delete[] arr;
}

int** createDynamicArray(size_t n, size_t m) {
    int** arr = new (nothrow) int* [n];
    if (!arr) {
        cout << "Memory problem" << endl;
        exit(0);
    }

    for (int i = 0; i < n; i++) {
        arr[i] = new (nothrow) int[m];
        if(!arr) {
            cout << "Memory problem" << endl;
            deleteDynamicArray(arr, i-1);
            exit(0);
        }
    }
    return arr;
}

int** createMatrix(int row, int col) {
    int** matrix = createDynamicArray(row, col);
    if(!matrix) {
        cout << "Memory problem" << endl;
        exit(0);
    }

    cout << "Enter matrix elements" << endl;

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> matrix[i][j];
        }
    }
    return matrix;
}

int** multiplicateMatrix(int** m1, int** m2, int r1, int c1, int r2, int c2) {
    int** multiplicationMatrix = createDynamicArray(r1, c2);
    if(!multiplicationMatrix) {
        cout << "Memory problem" << endl;
        exit(0);
    }

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            multiplicationMatrix[i][j] = 0;
        }
    }

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                multiplicationMatrix[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }
    return multiplicationMatrix;
}

void printMatrix(int** matrix, size_t row, size_t col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}


int main () {

    int row1 = 0, col1 = 0, row2 = 0, col2 = 0;
    do {
        cout << "Enter row and col for matrix 1: ";
        cin >> row1 >> col1;
        cout << "Enter row and col for matrix 2: ";
        cin >> row2 >> col2;
    } while(col1 != row2);

    int** matrix1 = createMatrix(row1, col1);
    int** matrix2 = createMatrix(row2, col2);

    int** multiplicationMatrix = multiplicateMatrix(matrix1, matrix2, row1, col1, row2, col2);

    cout << "Multiplication matrix: " << endl;
    printMatrix(multiplicationMatrix, row1, col2);

    deleteDynamicArray(matrix1, row1);
    deleteDynamicArray(matrix2, row2);
    deleteDynamicArray(multiplicationMatrix, row1);

    return 0;
}