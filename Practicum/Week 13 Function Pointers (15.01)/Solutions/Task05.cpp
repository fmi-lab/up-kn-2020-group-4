#include <iostream>

using std::cin;
using std::cout;
using std::endl;

typedef bool (*compare)(int a, int b);

bool ascending(int a, int b) {
    return a > b;
}

bool descending(int a, int b) {
    return a < b;
}

void read(int numbers[], int& n) {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }
}

void print(int numbers[], int n) {
    for (int i = 0; i < n; i++) {
        cout << numbers[i] << ' ';
    }
    cout << endl;
}

void sort(int numbers[], int n, compare cmp) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (cmp(numbers[j], numbers[j+1])) {
                int tmp = numbers[j];
                numbers[j] = numbers[j+1];
                numbers[j+1] = tmp;
            }
        }
    }
}

int main() {
    int numbers[100], n;

    read(numbers, n);

    sort(numbers, n, ascending);

    print(numbers, n);

    sort(numbers, n, descending);

    print(numbers, n);

    return 0;
}