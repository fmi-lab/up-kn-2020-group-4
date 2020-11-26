#include <iostream>

const int N = 100;

void calc(int array[], int n)
{
    int min = array[0],
        max = array[0];

    long sum = 0,
         multiply = 1;

    for (int i = 0; i < n; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }

        if (array[i] < min)
        {
            min = array[i];
        }

        sum += array[i];
        multiply *= array[i];
    }

    std::cout << "min " << min << std::endl;
    std::cout << "max " << max << std::endl;
    std::cout << "sum " << sum << std::endl;
    std::cout << "multiply " << multiply << std::endl;
    std::cout << "average " << (double)sum / n << std::endl;
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

    calc(array, n);

    return 0;
}