#include <iostream>

int main() 
{
    char letter_upper_case, letter_lower_case;

	std::cout << "Enter upper case letter: ";
    std::cin >> letter_upper_case;

    letter_lower_case = letter_upper_case - ('A' - 'a');

	std::cout << "Lower case letter: " << letter_lower_case;

    return 0;
}
