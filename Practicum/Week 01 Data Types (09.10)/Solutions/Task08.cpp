#include <iostream>

int main() 
{
    char letter, next_letter;

    std::cout << "Enter letter: ";
    std::cin >> letter;

    next_letter = letter + 1;

	std::cout << "Next letter is: ";
    std::cout << next_letter;

    return 0;
}
