#include <iostream>

const int N = 100;

void calc(double array[], int n)
{
    int count = 1;
    double min = array[0];

    for (int i = 1; i < n; i++)
    {
        if (array[i] == min)
        {
            count++;
        }
        else if (array[i] < min)
        {
            min = array[i];
            count = 1;
        }
    }

    std::cout << "Count: " << count << std::endl;
}

void input(double array[], int &n)
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
    double array[N];

    input(array, n);

    calc(array, n);

    return 0;
}