#include <iostream>

int main() 
{
    char letter;

    std::cout << "Enter letter: ";
    std::cin >> letter;

    std::cout << "ASCII code is: ";
    std::cout << (int) letter;

    return 0;
}
