#include <iostream>
using namespace std;

int* createDynamicArray(size_t n) {
    int* arr = new (nothrow) int [n];
    if (!arr) {
        return nullptr;
    }
    return arr;
}


int main () {

    size_t n = 0;
    cout << "n: ";
    cin >> n;
    
    int* arr = createDynamicArray(n);

    return 0;
}