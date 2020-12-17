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

void printSumMinMax(int *array, int size)
{
    int sum = array[0];
    int min = array[0];
    int max = array[0];

    for (int i = 1; i < size; i++)
    {
        sum += array[i];

        if (array[i] > max)
        {
            max = array[i];
        }

        if (array[i] < min)
        {
            min = array[i];
        }
    }

    std::cout << sum << " " << min << " " << max;
}

int main()
{
    int size;
    int *array;

    std::cout << "Enter size: ";
    std::cin >> size;

    array = createArray(size);

    printSumMinMax(array, size);

    delete[] array;
}