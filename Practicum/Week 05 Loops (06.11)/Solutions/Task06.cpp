#include <iostream>

int main()
{

    int number, count = 0;

    do
    {
        std::cin >> number;

        if (number > 0 && number % 2 == 0)
        {
            count++;
        }
    } while (number > -1);

    std::cout << count;

    return 0;
}
