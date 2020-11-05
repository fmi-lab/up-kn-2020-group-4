#include <iostream>

int main()
{
    int number;

    std::cin >> number;

    //       4 = 1000
    //          &
    // 4-1 = 3 = 0111 -
    //           ----
    //           0000 = 0
    
    // при изваждане на 1 всички 0-ли до първата 1-ца се променят на 1-ци,
    // а 1-цата става 0-ла, така че при операция & дават 0

    if (number && (!(number & (number-1)))) {
        std::cout << "YES";
    } else {
        std::cout << "NO";
    }

    return 0;
}