#include <iostream>

using std::cin;
using std::cout;
using std::endl;

typedef void (*sort)(int numbers[], int n);

void read(int numbers[], int &n)
{
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }
}

void print(int numbers[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << numbers[i] << ' ';
    }
    cout << endl;
}

void bubleSort(int numbers[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (numbers[j] > numbers[j+1]) {
                int tmp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = tmp;
            }
        }
    }
}

void insertionSort(int numbers[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = numbers[i];
        j = i - 1;

        while (j >= 0 && numbers[j] > key) {
            numbers[j + 1] = numbers[j];
            j--;
        }

        numbers[j + 1] = key;
    }
}

void merge(int numbers[], int left, int middle, int right) {
    int nLeft = middle - left + 1;
    int nRight = right - middle;
    int L[nLeft], R[nRight];

    for (int i = 0; i < nLeft; i++)
    {
        L[i] = numbers[left + i];
    }
    for (int j = 0; j < nRight; j++)
    {
        R[j] = numbers[middle + 1 + j];
    }

    int i = 0, j = 0;
    int k = left;

    while (i < nLeft && j < nRight)
    {
        if (L[i] <= R[j]) {
            numbers[k] = L[i];
            i++;
        } else {
            numbers[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < nLeft)
    {
        numbers[k] = L[i];
        i++;
        k++;
    }

    while (j < nRight) {
        numbers[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int numbers[], int left, int right) {
    if (left >= right) {
        return;
    }

    int middle = (left + right - 1) / 2;
    mergeSort(numbers, left, middle);
    mergeSort(numbers, middle + 1, right);
    merge(numbers, left, middle, right);
}

void mergeSort(int numbers[], int n) {
    mergeSort(numbers, 0, n-1);
}

    void sortNumbers(sort fn, int numbers[], int n)
{
    fn(numbers, n);
}

int main() {

    int numbers[100], numbers2[100], numbers3[100], n;

    read(numbers, n);

    for (int i = 0; i < n; i++) {
        numbers2[i] = numbers[i];
        numbers3[i] = numbers[i];
    }

    sortNumbers(bubleSort, numbers, n);
    cout << "Buble sort: ";
    print(numbers, n);

    sortNumbers(insertionSort, numbers2, n);
    cout << "Insertion sort: ";
    print(numbers2, n);

    sortNumbers(mergeSort, numbers3, n);
    cout << "Merge sort: ";
    print(numbers3, n);

    return 0;
}