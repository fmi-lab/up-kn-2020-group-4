#include <iostream>

int main()
{

    int k, number, sum = 0, count = 0;

    std::cin >> k;

    do
    {
        std::cin >> number;
        sum += number;
        count++;
    } while (sum < k);

    std::cout << count;

    return 0;
}