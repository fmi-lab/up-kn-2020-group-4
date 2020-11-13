#include <iostream>

int main()
{

    int f1 = 1, f2 = 1, f;

    std::cout << f1 << " " << f2;

    for (int i = 0; i < 11; i++) 
    {
        f = f1 + f2;
        f1 = f2;
        f2 = f;
        std::cout << " " << f;
    }

    return 0;
}