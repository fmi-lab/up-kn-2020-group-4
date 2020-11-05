#include <iostream>

int main()
{
    int number, position;

    std::cin >> number >> position;

    //      1 << k-1 - правим число, което има 1-ца на мястото за 0-ла
    //      ~(1 << k-1) - сменяме 0-те и 1-те
    //      n & ~(1 << k-1) - какъвто и да е k-я бит, то той ще стане 0

    std::cout << (number & ~(1 << position));

    return 0;
}