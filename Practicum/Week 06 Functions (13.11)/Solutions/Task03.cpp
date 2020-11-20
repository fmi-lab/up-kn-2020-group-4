#include <iostream>

bool isPalindromeInDecimal(int number) 
{
    int reversedNumber = 0, originalNumber = number;
    while (number)
    {
        reversedNumber = 10 * reversedNumber + number % 10;
        number /= 10;
    }
    return (originalNumber == reversedNumber);
}

void printNumbers(int start, int end)
{
    for (int i = start; i <= end; i++)
    {
        if (isPalindromeInDecimal(i))
        {
            std::cout << i << " ";
        }
    }
}

int main()
{
    int k, l;

    std::cin >> k >> l;

    printNumbers(k, l);

    return 0;
}