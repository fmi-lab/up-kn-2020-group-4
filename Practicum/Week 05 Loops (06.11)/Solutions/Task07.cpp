#include <iostream>

int main()
{

    int start, end, count = 0;

    std::cin >> start >> end;

    for (int i = start; i <= end; i++)
    {
        if (i % 3 == 0)
        {
            count++;
        }
    }

    std::cout << count;

    return 0;
}