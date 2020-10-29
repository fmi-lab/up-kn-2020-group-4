#include <iostream>

int main()
{

    int number, number2;

    std::cin >> number >> number2;

    if (number < number2)
    {
        std::cout << number2 << ' ' << number;
    }
    else
    {
        std::cout << number << ' ' << number2;
    }

    return 0;
}