#include <iostream>

const int N = 100;

void print(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << array[i] << " ";
    }
}

void move(int array[], int n)
{
    int k, pos, tempArray[N];

    std::cout << "Number of positions: ";
    std::cin >> k;

    // Moving elements to new positions in another array
    for (int i = 0; i < n; i++)
    {
        pos = (i + k) % n;

        tempArray[pos] = array[i];
    }

    print(tempArray, n);
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

    move(array, n);

    return 0;
}