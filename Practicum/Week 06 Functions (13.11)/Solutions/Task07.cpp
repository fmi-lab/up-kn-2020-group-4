#include <iostream>

bool inValidDate(int day, int month, int year)
{
    if (month < 1 || month > 12) 
    {
        return false;
    }

    bool monthHas31Days = (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12);
    bool monthHas30Days = (month == 4 || month == 6 || month == 9 || month == 11);

    bool invalid31DayMonth = monthHas31Days && day > 31;
    bool invalid30DayMonth = monthHas30Days && day > 30;
    bool invalidFebruary = (month == 2 && year % 4 == 0 && day > 29) || (month == 2 && year % 4 != 0 && day > 28);

    return !(day < 0 || invalid31DayMonth || invalid30DayMonth || invalidFebruary);
}

bool isLucky(int day, int month, int year)
{
    int sumOfAllDigits = 0;

    sumOfAllDigits += day / 10;
    sumOfAllDigits += day % 10;

    sumOfAllDigits += month / 10;
    sumOfAllDigits += month % 10;

    sumOfAllDigits += year / 1000;
    sumOfAllDigits += year / 100 % 10;
    sumOfAllDigits += year / 10 % 10;
    sumOfAllDigits += year % 10;

    return sumOfAllDigits % 6 == 0;
}

void read()
{
    int day, month, year;

    std::cin >> day >> month >> year;

    if (inValidDate(day, month, year))
    {
        if (isLucky(day, month, year))
        {
            std::cout << "Lucky";
        }
        else
        {
            std::cout << "Not Lucky";
        }

        // std::cout << isLucky(day, month, year) ? "Lucky" : "Not Lucky";
    }
    else
    {
        std::cout << "Invalid date!";
    }
}

int main()
{
    read();
}
