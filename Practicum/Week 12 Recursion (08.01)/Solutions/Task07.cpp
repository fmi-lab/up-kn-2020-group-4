#include <iostream>

void generateAllStringsUtil(char str[], int currentPosition, int size)
{
    if (currentPosition == size)
    {
        // terminate binary string
        str[currentPosition] = '\0';
        std::cout << str << " " << std::endl;
        return;
    }

    if (str[currentPosition - 1] == '1')
    {
        str[currentPosition] = '0';
        generateAllStringsUtil(str, currentPosition + 1, size);
    }

    if (str[currentPosition - 1] == '0')
    {
        str[currentPosition] = '0';
        generateAllStringsUtil(str, currentPosition + 1, size);
        str[currentPosition] = '1';
        generateAllStringsUtil(str, currentPosition + 1, size);
    }
}

void generateAllStrings(int size)
{
    if (size <= 0) {
        return;
    }

    char str[size];

    str[0] = '0';
    generateAllStringsUtil(str, 1, size);

    str[0] = '1';
    generateAllStringsUtil(str, 1, size);
}

int main()
{
    int n;
    std::cin >> n;

    generateAllStrings(n);

    return 0;
}