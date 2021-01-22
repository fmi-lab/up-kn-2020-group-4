#include <iostream>

using std::cin;
using std::cout;
using std::endl;

enum VALID_CODES {
    OK,
    INVALID_MONTH,
    INVALID_DAY,
    INVALID_HOUR,
    INVALID_MINUTE,
    INVALID_SECOND
};

int main() {
    int year, month, day, hour, minute, second;

    cin >> year >> month >> day >> hour >> minute >> second;

    if (month < 0 || month > 12) {
        return INVALID_MONTH;
    }

    if (day < 1 || day > 31) {
        return INVALID_DAY;
    }

    if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) {
        return INVALID_DAY;
    }

    if (month == 2) {
        if ((year % 4 == 0 && year % 100 != 0 && year % 400 == 0) && day > 29) {
            return INVALID_DAY;
        } else if (day > 28) {
            return INVALID_DAY;
        }
    }

    if (hour < 0 || hour > 24) {
        return INVALID_HOUR;
    }

    if (minute < 0 || minute > 59)
    {
        return INVALID_MINUTE;
    }

    if (second < 0 || second > 59)
    {
        return INVALID_SECOND;
    }

    return OK;
}