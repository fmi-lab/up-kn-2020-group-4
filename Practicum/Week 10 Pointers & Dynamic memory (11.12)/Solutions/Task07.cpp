#include <iostream>

int **createArray(int size)
{
    int **array = new int *[size];

    for (int i = 0; i < size; i++)
    {
        array[i] = new int[size - i];

        for (int j = 0; j < size - i; j++)
        {
            array[i][j] = j + 1;
        }
    }

    return array;
}

void print(int **array, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - i; j++)
        {
            std::cout << array[i][j] << " ";
        }

        std::cout << std::endl;
    }
}

void cleanup(int **array, int size)
{
    for (int i = 0; i < size; i++)
    {
        delete[] array[i];
    }
    delete[] array;
}

int main()
{
    int size;
    int **array;

    std::cout << "Enter size: ";
    std::cin >> size;

    array = createArray(size);

    print(array, size);

    cleanup(array, size);
}