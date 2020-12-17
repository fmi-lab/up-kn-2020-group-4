#include <iostream>

int *createArray(int size)
{
    int *array = new int[size];

    std::cout << "Enter array: " << std::endl;

    for (int i = 0; i < size; i++)
    {
        std::cin >> array[i];
    }

    return array;
}

int main()
{
    int size;
    int *array;

    std::cout << "Enter size: ";
    std::cin >> size;

    array = createArray(size);

    for (int i = 0; i < size; i++)
    {
        std::cout << array[i] << " ";
    }

    delete[] array;
}