#include <iostream>

void print(char letter)
{
    int count = letter - 'A';

    if (count < 0)
    {
        return;
    }

    for (int i = 0; i <= count; i++)
    {
        std::cout << (char)('A' + i) << " ";
    }
    std::cout << std::endl;

    print(--letter);
}

int main()
{
    char letter;

    std::cout << "Enter capital letter: ";
    std::cin >> letter;

    print(letter);
}