#include <iostream>

const int MAX_ARRAY = 21;

void read(int array[], int &n)
{
    std::cin >> n;

    for (size_t i = 0; i < n; i++)
    {
        std::cin >> array[i];
    }
}

int convertBinToDec(int array[], int n)
{
    int result = 0;
    int mult = 1;
    for (size_t i = n - 1; i > 0; i--) 
    {
        result += array[i] * mult;
        mult *= 2;
    }

    return result;
}

int convertDecToOct(int decimal)
{
    int result = 0;
    int mult = 1;

    while(decimal)
    {
        int nextDigit = decimal % 8;
        result = nextDigit * mult + result;

        mult *= 10;
        decimal /= 8;
    }

    return result;
}

int convertBinToOct(int array[], int n)
{
    int decimal = convertBinToDec(array, n);
    int octal = convertDecToOct(decimal);
    return octal;
}

int main()
{
    int array[MAX_ARRAY];
    int n;

    read(array, n);

    std::cout << convertBinToOct(array, n);
}