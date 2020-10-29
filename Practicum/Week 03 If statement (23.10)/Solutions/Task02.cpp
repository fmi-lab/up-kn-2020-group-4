#include <iostream>

int main() 
{

    int number, thousands, hundreds, tens, ones;

    std:: cin >> number;

    thousands = number / 1000;
    hundreds = number / 100 % 10;
    tens = number / 10 % 10;
    ones = number % 10;

    if (thousands == ones && hundreds == tens) 
    {
        std::cout << "Yes";
    } 
    else 
    {
        std::cout << "No";
    }

    // Alternative
    //std::cout << thousands == ones && hundreds == tens ? "Yes" : "No";

    return 0;
}