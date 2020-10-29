#include <iostream>

int main()
{

    int days, day, month;

    std::cin >> days;

    day = 22 + days;
    month = 1;

    if (day > 31) 
    {
        day = day - 31;
        month = 2;
    }

    std::cout << day << " " << month;

    return 0;
}