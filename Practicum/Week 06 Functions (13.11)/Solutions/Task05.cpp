#include <iostream>

int main()
{

    int squares, size;

    std::cin >> size >> squares;

    for (int i = 0; i < (size - 1) * squares + 1; i++)
    {
        std::cout << "* ";
    }
    std::cout << std::endl;

    for (int i = 0; i < size - 2; i++)
    {
        for (int j = 0; j < squares; j++)
        {
            std::cout << "* ";
            for (int k = 0; k < size - 2; k++)
            {
                std::cout << "  ";
            }
        }
        std::cout << "*\n";
    }

    for (int i = 0; i < (size - 1) * squares + 1; i++)
    {
        std::cout << "* ";
    }
    std::cout << std::endl;

    return 0;
}