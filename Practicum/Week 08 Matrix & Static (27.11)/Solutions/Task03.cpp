#include <iostream>

const int MAX_SIZE = 100;

void read(int arr[][MAX_SIZE], int &rowSize, int &colSize)
{
    std::cout << "Enter matrix nxm sizes: ";
    std::cin >> rowSize >> colSize;

    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; j++)
        {
            std::cin >> arr[i][j];
        }
    }
}

void transpose(int arr[][MAX_SIZE], int rowSize, int colSize)
{
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = i + 1; j < colSize; j++)
        {
            int tmp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = tmp;
        }
    }
}

void print(int arr[][MAX_SIZE], int rowSize, int colSize)
{
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; j++)
        {
            std::cout << arr[i][j] << ' ';
        }
        std::cout << std::endl;
    }
}

int main()
{
    int rowSize, colSize;
    int arr[MAX_SIZE][MAX_SIZE];

    read(arr, rowSize, colSize);

    transpose(arr, rowSize, colSize);

    print(arr, rowSize, colSize);

    return 0;
}