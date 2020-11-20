#include <iostream>

void printNumbers(int n);

int main()
{
    int n;

    std::cin >> n;

    printNumbers(n);

    return 0;
}

void printNumbers(int n)
{
    for (int i = 1; i <= n; i++)
    {
        std:: cout << i << " ";
    }
}