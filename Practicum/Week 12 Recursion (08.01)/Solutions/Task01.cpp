
#include <iostream>

const int MAX_SIZE = 100;

void print(int *arr, int n)
{
    if (n == 0)
    {
        return;
    }

    print(arr + 1, n - 1);
    std::cout << arr[0] << " ";
}

void initializeArr(int *arr, int &n)
{
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }
}

int main()
{
    int arr[MAX_SIZE], n;

    initializeArr(arr, n);

    print(arr, n);
}