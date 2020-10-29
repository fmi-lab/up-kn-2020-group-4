#include <iostream>

int main() 
{

    int x, y;

    std:: cin >> x >> y;

    if (x > 0 && y > 0) 
    {
        std::cout << "I";
    } 
    else if (x > 0 && y < 0) 
    {
        std::cout << "IV";
    } 
    else if (x < 0 && y < 0) 
    {
        std::cout << "III";
    } 
    else if (x < 0 && y > 0) 
    {
        std::cout << "II";
    } 
    else if (x == 0 && y != 0) 
    {
        std::cout << "On X axis";
    } 
    else if (x != 0 && y == 0) 
    {
        std::cout << "On Y axis";
    } 
    else if (x == 0 && y == 0) 
    {
        std::cout << "In center";
    }

    return 0;
}