#include <iostream>

int main()
{

    int number, position1, position2;

    std::cin >> number >> position1 >> position2;

    unsigned int bit1 = (number >> position1) & 1;
    unsigned int bit2 = (number >> position2) & 1;

    unsigned int tempBit = (bit1 ^ bit2);
    tempBit = (tempBit << position1) | (tempBit << position2);

    std::cout << (number ^ tempBit);

    return 0;
}
