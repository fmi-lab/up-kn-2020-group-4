#include <iostream>

int main()
{

    int n, iterator = 1;

    std::cin >> n;

    while(iterator * iterator <= n) 
    {
        std::cout << iterator * iterator << " ";
        iterator++;
    }

    return 0;
}