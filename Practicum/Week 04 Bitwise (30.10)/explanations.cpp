#include <iostream>

int main() {

    int n = 5;

    // multiply by 2
    //  5 = 0101
    // 10 = 1010
    std::cout << "(5 << 1): " << (n << 1) << std::endl;

    // multiply by 4
    //  5 = 00101
    // 20 = 10100
    std::cout << "(5 << 2): " << (n << 2) << std::endl;

    // devide by 2
    // 5 = 101
    // 2 = 010
    std::cout << "(5 >> 1): " << (n >> 1) << std::endl;

    // devide by 4
    // 5 = 101
    // 2 = 001
    std::cout << "(5 >> 2): " << (n >> 2) << std::endl;

    // opertor ~
    // 5 = 0 0000000000000000000000000000101
    //-6 = 1 1111111111111111111111111111010
     std::cout << "~5: " << (~n) << std::endl;

    // opertor ~
    //          5 = 00000000000000000000000000000101
    // 4294967290 = 11111111111111111111111111111010
    unsigned int p = 5;
    std::cout << "~5: " << (~p) << std::endl;

    int number1 = 23; // = 10111
    int number2 = 13; // = 01101

    // operator &
    // 10111
    //&
    // 01101
    //------
    // 00101

    std::cout << "(23 & 13): " << (number1 & number2) << std::endl; // 5 = 101

    // operator |
    // 10111
    //|
    // 01101
    //------
    // 11111

    std::cout << "(23 | 13): " << (number1 | number2) << std::endl; // 31 = 11111

    // operator ^
    number1 = 7; // 00111

    // 00111
    //^
    // 01101
    //------
    // 01010

    std::cout << "(7 ^ 13): " << (number1 ^ number2) << std::endl; // 10 = 1010


    return 0;
}