#include <iostream>

const int N = 100;

void read(int array[], int &count)
{
    char input;
    count = 0;

    while (true)
    {
        std::cin >> input;

        if (input == '#')
        {
            break;
        }

        array[count++] = input - '0';
    }
}

void sort(int array[], int count)
{
    int temp;
    int maxIndex;

        for (int i = 0; i < count; i++)
    {
        maxIndex = i;
        for (int j = i + 1; j < count; j++)
        {
            if (array[j] > array[maxIndex])
            {
                maxIndex = j;
            }
        }

        temp = array[i];
        array[i] = array[maxIndex];
        array[maxIndex] = temp;
    }
}

void print(int array[], int count)
{
    for (int i = 0; i < count; i++)
    {
        std::cout << array[i] << " ";
    }
}

int main()
{
    int array[N];
    int count;

    read(array, count);
    sort(array, count);
    print(array, count);
}