#include <iostream>

int main() 
{

    int number, hundreds, tens, ones;

    std:: cin >> number;

    hundreds = number / 100;
    tens = number / 10 % 10;
    ones = number % 10;

    if (hundreds == ones || tens == ones || hundreds == tens) 
    {
        std::cout << "True";
    } 
    else 
    {
        std::cout << "False";
    }

    // Alternative
    //std::cout << (hundreds == ones || tens == ones || hundreds == tens) ? "True" : "False";

    return 0;
}