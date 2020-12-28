#include <iostream>

const int ARRAY_SIZE = 20;
const int NUMBER_Of_DIGITS = 10;

size_t strlen(const char *text)
{
    size_t len = 0;

    while (text[len])
    {
        ++len;
    }

    return len;
}

void countDigits(char string[], size_t size, int counter[])
{
    for (size_t i = 0; i < size; ++i)
    {
        ++counter[string[i] - '0'];
    }
}

int main()
{
    char firstNumber[ARRAY_SIZE], secondNumber[ARRAY_SIZE], result[ARRAY_SIZE];
    int counterOfDigits1[NUMBER_Of_DIGITS] = {}, counterOfDigits2[NUMBER_Of_DIGITS] = {};
    int counter[NUMBER_Of_DIGITS] = {};
    int countElements = 0;

    std::cin >> firstNumber;
    std::cin >> secondNumber;

    size_t size1, size2;
    size1 = strlen(firstNumber);
    size2 = strlen(secondNumber);

    countDigits(firstNumber, size1, counterOfDigits1);
    countDigits(secondNumber, size2, counterOfDigits2);

    for (int i = 0; i < 10; ++i)
    {
        counter[i] = (counterOfDigits1[i] < counterOfDigits2[i]) ? counterOfDigits1[i] : counterOfDigits2[i];
    }

    for (int i = 9; i >= 0; --i)
    {
        for (int j = 0; j < counter[i]; ++j)
        {
            result[countElements] = '0' + i;
            ++countElements;
        }
    }

    std::cout << result;

    return 0;
}

