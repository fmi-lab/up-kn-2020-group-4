#include <iostream>

const int N = 100;

void read(int array[], int &n)
{
    std::cin >> n;

    for (size_t i = 0; i < n; i++)
    {
        std::cin >> array[i];
    }
}

void printMostOftenElement(int array[], int n)
{
    unsigned counter = 0, maxCounter = 0, mostOftenNum;

    for (size_t i = 0; i < n; i++)
    {
        counter = 1;
        //-1 is used to mark an element i have looked at
        if (array[i] != -1)
        {
            for (size_t j = i + 1; j < n; j++)
            {
                if (array[i] == array[j])
                {
                    counter++;
                    array[j] = -1;
                }
            }
        }

        if (counter > maxCounter)
        {
            maxCounter = counter;
            mostOftenNum = array[i];
        }
    }

    std::cout << mostOftenNum << " - " << maxCounter;
}

int main()
{
    int arr[N];
    int n;

    read(arr, n);

    printMostOftenElement(arr, n);
}