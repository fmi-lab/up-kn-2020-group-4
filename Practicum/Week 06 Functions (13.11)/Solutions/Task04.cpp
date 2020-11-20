#include <iostream>

bool hasSameNeighBouringDigits(int number)
{
    int previousDigit = -1, currentDigit;

    while (number > 0)
    {
        currentDigit = number % 10;
        if (currentDigit == previousDigit) 
        {
            return true;
        }

        previousDigit = currentDigit;
        number /= 10;
    }

    return false;
}

void printNumbers(int start, int end)
{
    for (int i = start; i <= end; i++)
    {
        if (hasSameNeighBouringDigits(i))
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