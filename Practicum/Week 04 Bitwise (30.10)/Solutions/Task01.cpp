#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    // 72      = 1001000
    //          &
    // 72 >> 1 = 0100100
    //         ---------
    //           0000000 = 0

    // 12     = 1100
    //         &
    // 12 > 1 = 0110 
    //         -----
    //          0100 != 0

    if (n & (n >> 1)) {
        std::cout << "False";
    } else {
        std::cout << "True";
    }
}