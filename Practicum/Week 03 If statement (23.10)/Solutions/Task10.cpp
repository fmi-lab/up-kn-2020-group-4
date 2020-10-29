#include <iostream>

int main()
{

    int number1, number2;
    char sign;

    std::cin >> number1 >> number2 >> sign;

    switch (sign)
    {
    case '+':
        std::cout << number1 + number2;
        break;

    case '-':
        std::cout << number1 - number2;
        break;

    case '/':
        std::cout << ((double) number1) / number2;
        break;

    case '*':
        std::cout << number1 * number2;
        break;

    default:
        std::cout << "Invalid operation";
    }

    return 0;
}