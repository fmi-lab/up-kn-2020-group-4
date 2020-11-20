#include <iostream>

int main()
{

    int n, number, max_negative = 0;

    std::cin >> n;

    for (int i = 0; i < n; i++) 
    {
        std::cin >> number;

        if (number < 0 && (number > max_negative || max_negative == 0))
        {
            max_negative = number;
        }
    }

    std::cout << max_negative;

    return 0;
}