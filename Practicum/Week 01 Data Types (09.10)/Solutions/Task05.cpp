#include <iostream>

int main() 
{
    int first_number, second_number, temporary_number;
    std::cout << "Enter first number: " ;
    std::cin >> first_number;
    std::cout << "Enter second number: " ;
    std::cin >> second_number;

    temporary_number = first_number;
    first_number = second_number;
    second_number = temporary_number;

    std::cout << "Swapped numbers: " << first_number << " " << second_number;

    return 0;
}
