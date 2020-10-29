#include <iostream>

int main() 
{

    int number1, number2, number3, max, min;

    std:: cin >> number1 >> number2 >> number3;

    max = number1;
    min = number1;

    if (max < number2)
    {
        max = number2;
    }
    if (min > number2)
    {
        min = number2;
    }

    if (max < number3)
    {
        max = number3;
    }
    if (min > number3)
    {
        min = number3;
    }
    
    std::cout << "Min: " << min << std::endl;
    std::cout << "Max: " << max << std::endl;

    return 0;
}