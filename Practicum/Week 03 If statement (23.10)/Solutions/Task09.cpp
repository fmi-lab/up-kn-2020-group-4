#include <iostream>

int main()
{

    int side1, side2, side3;

    std::cin >> side1 >> side2 >> side3;

    if (side1 == side2 && side1 == side3) 
    {
        std::cout << "Equilateral";
    }
    else if (side1 == side2 || side2 == side3 || side3 == side1)
    {
        std::cout << "Isosceles";
    }
    else
    {
        std::cout << "Scalene";
    }

    return 0;
}