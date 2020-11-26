#include <iostream>

const int N = 100;

void print(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << array[i] << " ";
    }

    std::cout << std::endl;
}

void reverseWithArray(int array[], int n)
{
    int tempArray[N];

    // Moving elements to new positions in another array
    for (int i = 0, j = n - 1; i < n; i++, j--)
    {
        tempArray[j] = array[i];
    }

    print(tempArray, n);
}

void reverse(int array[], int n)
{
    int temp;

    // Swapping elements
    for (int i = 0; i < n / 2; i++)
    {
        temp = array[i];
        array[i] = array[n - i - 1];
        array[n - i - 1] = temp;
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
    int n, array[N];

    input(array, n);

    reverseWithArray(array, n);
    reverse(array, n);

    return 0;
}