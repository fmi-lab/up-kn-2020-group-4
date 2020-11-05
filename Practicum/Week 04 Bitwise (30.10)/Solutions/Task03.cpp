#include <iostream>

int main()
{
    int number;

    std::cin >> number;

    // n >> 2 -> n/4 = 0.25 * n
    // n >> 1 -> n/2 = 0.50 * n
    // n      ->     = 1.00 * n
    // n << 1 ->     = 2.00 * n 
    // n << 2 ->     = 4.00 * n

    // 3.5 = 2 + 1 + 0.5 

    std::cout << ((number << 1) + number + (number >> 1));

    return 0;
}