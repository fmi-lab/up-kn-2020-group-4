#include <iostream>

int main()
{

    float result, weight, max_result, max_weight;
    int n, winner = 1;

    std::cin >> n;
    for (int i = 1; i <= n; i++)
    {
        std::cin >> result >> weight;

        bool isNotInitialized = i == 1;
        bool hasBetterResult = max_result < result;
        bool hasSameResultLessWeight = max_result == result && max_weight > weight;

        if (isNotInitialized || hasBetterResult || hasSameResultLessWeight)
        {
            max_result = result;
            max_weight = weight;
            winner = i;
        }
    }

    std::cout << winner;

    return 0;
}