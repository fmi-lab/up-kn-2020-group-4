#include <iostream>

int *createArray(int size)
{
    int temp;
    int *array = new int[size];

    std::cout << "Enter array: " << std::endl;

    for (int i = 0; i < size; i++)
    {
        std::cin >> array[i];
    }

    return array;
}

void sort(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (array[i] < array[j])
            {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

void print(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << array[i] << " ";
    }
}

int main()
{
    int size;
    int *array;

    std::cout << "Enter size: ";
    std::cin >> size;

    array = createArray(size);

    sort(array, size);

    print(array, size);

    delete[] array;
}