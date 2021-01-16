#include <iostream>
#include <cstring>
using namespace std;

int* insertArray(size_t &size) {
    cout << "Enter array size: ";
    cin >> size;

    int* arr = new (nothrow) int [size];
    if (arr == nullptr) {
        cout << "Memory problem " << endl;
		exit(0);
    }

    cout << "Enter array  elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    return arr;
}

bool checkForPermutation(int* arr1, int* arr2, size_t size1, size_t size2) {
    if (size1 != size2) {
        return false;
    }

    bool* visit = new (nothrow) bool[size2]{};
    if (!visit) {
        cout << "Memory problem " << endl;
        exit(0);
    }

    for (int i = 0; i < size1; i++) {
        bool match = false;

        for (int j = 0; j < size2; j++) {
            if (!visit[j] && arr2[j] == arr1[i]) {
                visit[j] = true;
                match = true;
                break;
            }
        }

        if (!match) {
            return false;
        }
    }

    delete[] visit;
    return true;

} 

int main () {

    size_t size1 = 0, size2 = 0;
    int* arr1 = insertArray(size1);
    int* arr2 = insertArray(size2);

    cout << boolalpha << checkForPermutation(arr1, arr2, size1, size2) << endl;

    delete[] arr1;
    delete[] arr2;

    return 0;
}