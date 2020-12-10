#include <iostream>

const int N = 100;

void read(int array[], int &n, int &indexToDelete)
{
    std::cin >> n;

    for (size_t i = 0; i < n; i++)
    {
        std::cin >> array[i];
    }

    std::cin >> indexToDelete;
}

void remove(int indexToDelete, int array[], int n)
{
    for (size_t i = indexToDelete; i < n; i++)
    {
        array[i] = array[i + 1];
    }
    array[n - 1] = -1;
}

void print(int array[], int n)
{
    for (size_t i = 0; i < n; i++)
    {
        std::cout << array[i] << ' ';
    }
}

int main()
{
    int arr[N];
    int n;
    int indexToDelete;

    read(arr, n, indexToDelete);

    remove(indexToDelete, arr, n);

    print(arr, n);
}