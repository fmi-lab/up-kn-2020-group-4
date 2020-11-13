#include <iostream>

int main()
{
    int number, count = 0;

    do
    {
        std::cin >> number;
        if (number != 0)
        {
            count++;
        }
    } while (number != 0);

    std::cout << count;

    return 0;
}