#include <iostream>
using namespace std;

const int MAX_ARRAY_SIZE = 10000;
 
void insertArrayElements(int* arr, size_t size) {
     for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}

int* getMinNumber(int* arr, size_t size) {
    int* min = &arr[0];
    for (int i = 1; i < size; i++) {
        if (*min > arr[i]) {
            min = &arr[i];
        }
    }
    return min;
}

int* getMaxNumber(int* arr, size_t size) {
    int* max = &arr[0];
    for (int i = 1; i < size; i++) {
        if (*max < arr[i]) {
            max = &arr[i];
        }
    }
    return max;
}

int main () {

    size_t size = 0;
    cout << "Size: ";
    cin >> size;

    int arr[MAX_ARRAY_SIZE] = {};
    insertArrayElements(arr, size);

    int* minNumber = getMinNumber(arr, size);
    int* maxNumber = getMaxNumber(arr, size);

    cout << "Min = " << *minNumber << " Max = " << *maxNumber << endl;
    return 0;
}