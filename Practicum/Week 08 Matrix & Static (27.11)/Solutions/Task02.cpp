#include <iostream>

const int MAX_SIZE = 100;

void read(int array[][MAX_SIZE], int &side) 
{
    std::cout << "Enter side: ";
    std::cin >> side;

    for (int i = 0; i < side; i++)
    {
        std::cout << "Enter elements for row " << i + 1 << std::endl;

        for (int j = 0; j < side; j++)
        {
            std::cin >> array[i][j];
        }
    }
}

bool isMagic(int side, int array[][MAX_SIZE])
{
    int sum = 0;
    int temp = 0;

    // First row sum
    for (int i = 0; i < side; i++)
    {
        sum += array[0][i];
    }

    // Sum for rows
    for (int i = 1; i < side; i++)
    {
        temp = 0;
        for (int j = 0; j < side; j++)
        {
            temp += array[i][j];
        }

        if (temp != sum)
        {
            return false;
        }
    }

    // Sum for columns
    for (int i = 0; i < side; i++)
    {
        temp = 0;
        for (int j = 0; j < side; j++)
        {
            temp += array[j][i];
        }

        if (temp != sum)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int inputMatrix[MAX_SIZE][MAX_SIZE];
    int side;

    read(inputMatrix, side);

    std::cout << (isMagic(side, inputMatrix) ? "Magic" : "Normal");

}