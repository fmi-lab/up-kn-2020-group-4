#include <iostream>

const int N = 100;

void print(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << array[i] << " ";
    }
}

void sort(int array[], int n)
{
    int temp;

    // Bubble sort
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (array[j] < array[i])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    print(array, n);
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

    sort(array, n);

    return 0;
}