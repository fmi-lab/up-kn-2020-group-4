#include <iostream>

const int N = 4;

int main()
{
    int input[N][N] = 
    {
        { 1,  2,  3,  4}, 
        { 5,  6,  7,  8}, 
        { 9, 10, 11, 12}, 
        {13, 14, 15, 16}
    };

    for (int i = N - 1; i >= 0; i--)
    {
        for (int j = 0; j < N; j++)
        {
            std::cout << input[j][i] << " ";
        }

        std::cout << std::endl;
    }
}