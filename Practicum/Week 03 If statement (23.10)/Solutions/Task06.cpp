#include <iostream>

int main()
{

    int number, hundreds, tens, ones;

    std::cin >> number;

    hundreds = number / 100;
    tens = number / 10 % 10;
    ones = number % 10;

    if (hundreds <= tens && tens <= ones)
    {
        std::cout << "TRUE";
    }
    else
    {
        std::cout << "FALSE";
    }

    // Alternative
    //std::cout << (hundreds <= tens && tens <= ones) ? "TRUE" : "FALSE";

    return 0;
}