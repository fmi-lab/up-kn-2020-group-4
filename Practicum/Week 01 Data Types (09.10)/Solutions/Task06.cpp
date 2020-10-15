#include <iostream>

int main() 
{
    int length, width, perimeter;
    std::cout << "Enter length: ";
    std::cin >> length;
    std::cout << "Enter width: ";
    std::cin >> width;
    
    perimeter = 2 * (length + width);

    std::cout << "Perimeter is: " << perimeter;

    return 0;
}
