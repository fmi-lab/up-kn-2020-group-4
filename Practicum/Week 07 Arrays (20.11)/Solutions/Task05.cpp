#include <iostream>

const int N = 100;

void calc(int array[], int n)
{
    unsigned counter = 0, maxCounter = 0, mostOftenNum;

    for (int i = 0; i < n; i++)
    {
        counter = 1;

        //-1 is used to mark an element i have looked at
        if (array[i] != -1)
        {
            for (int j = i + 1; j < n; j++)
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

    std::cout << "The number: " << mostOftenNum << " is the most common in the array and we found it this many times: " << maxCounter;
}

void input(int array[], int &n)
{
    do
    {
        std::cout << "Number of elements: ";
        std::cin >> n;
    } while (n < 1 || n > 100);

    for (int i = 0; i < n; i++)
    {
        std::cout << "Enter element " << i + 1 << " \n";
        std::cin >> array[i];
    }
}

int main()
{
    int n;
    int array[N];

    input(array, n);

    calc(array, n);

    return 0;
}