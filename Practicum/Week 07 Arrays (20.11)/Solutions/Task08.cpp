#include <iostream>
#include <iomanip>

const int MAX_SIZE = 100;

void initializeGame(char field[][MAX_SIZE], unsigned &fieldSize, char &player1Sym, char &player2Sym)
{
    std::cout << "Please enter the field size!" << std::endl;
    std::cin >> fieldSize;
    std::cout << "Please enter the symbols that will be used by the two players" << std::endl;
    std::cin >> player1Sym >> player2Sym;

    for (int i = 0; i < fieldSize; i++)
    {
        for (int j = 0; j < fieldSize; j++)
        {
            field[i][j] = ' ';
        }
    }
}

void printField(char field[][MAX_SIZE], unsigned &fieldSize)
{
    //this adds the  lines above and below the table. setfill tells setw to use '-' instead of spaces
    //setw generates x number of spaces or characters if setfill is used
    std::cout << std::setfill('-') << std::setw(5 * fieldSize - 1) << " " << std::endl;

    for (int i = 0; i < fieldSize; i++)
    {
        std::cout << "| ";
        for (int j = 0; j < fieldSize; j++)
        {
            std::cout << field[i][j] << " | ";
        }
        std::cout << std::endl;
    }

    std::cout << std::setfill('-') << std::setw(5 * fieldSize - 1) << " " << std::endl;
}

void checkField(char sym, char p1Sym, char p2Sym, unsigned &counterP1, unsigned &counterP2)
{
    if (sym == p1Sym)
    {
        counterP1++;
    }
    else if (sym == p2Sym)
    {
        counterP2++;
    }
}

//checks if someone has won the game
bool winCondition(char field[][MAX_SIZE], char player1Sym, char player2Sym, unsigned fieldSize)
{
    //counters used to check if someone has one. If all 3 values of a field are the same. That person has won
    bool rowFlag = true, colFlag = true, diagFlag = true, revDiagFlag = true;

    for (int i = 0; i < fieldSize - 1; i++)
    {
        if (field[i][i] != field[i + 1][i + 1] || field[i][i] == ' ')
        {
            diagFlag = false;
        }
        if (field[i][fieldSize - i - 1] == ' ' ||
            field[i][fieldSize - i - 1] != field[i + 1][fieldSize - (i + 1) - 1])
        {
            revDiagFlag = false;
        }
    }

    if (diagFlag || revDiagFlag)
    {
        printField(field, fieldSize);
        char sym = diagFlag ? field[0][0] : field[0][fieldSize - 1];
        unsigned playerNum = sym == player1Sym ? 1 : 2;
        std::cout << "Player" << playerNum << " with symbol: " << sym << " won!!";
        return true;
    }

    for (int i = 0; i < fieldSize; i++)
    {
        rowFlag = true, colFlag = true;

        for (int j = 0; j < fieldSize - 1; j++)
        {
            //checks if any neighboring two elements in row are different
            if (field[i][j] != field[i][j + 1] || field[i][j] == ' ')
            {
                rowFlag = false;
            }
            //checks if any neighboring two elements in column are different
            if (field[j][i] != field[j + 1][i] || field[j][i] == ' ')
            {
                colFlag = false;
            }
        }

        //checks if someone has won. Aka if a row, column or diagonal is filled by one symbole
        if (rowFlag || colFlag)
        {
            printField(field, fieldSize);
            char sym = rowFlag ? field[i][0] : field[0][i];
            unsigned playerNum = sym == player1Sym ? 1 : 2;
            std::cout << "Player" << playerNum << " with symbol: " << sym << " won!!";
            return true;
        }
    }

    return false;
}

//asks player to enter coordinates until he enters correct values
void playerTurn(char symbol, char field[][MAX_SIZE], unsigned fieldSize)
{
    unsigned x, y;
    do
    {
        std::cout << "Player please enter empty coordinates where you wish to place a symbol" << std::endl;
        std::cin >> x >> y;
    } while (x > fieldSize || y > fieldSize || field[x][y] != ' ');
    field[x][y] = symbol;
}

//if all fields are filled that means the game ends and nobody wins
bool filledField(char field[][MAX_SIZE], unsigned fieldSize)
{
    unsigned counter = 0;
    for (int i = 0; i < fieldSize; i++)
    {
        for (int j = 0; j < fieldSize; j++)
        {
            if (field[i][j] != ' ')
            {
                counter++;
            }
        }
    }
    if (counter == fieldSize * fieldSize)
    {
        std::cout << "You are even!";
        return true;
    }

    return false;
}

int main()
{
    char field[MAX_SIZE][MAX_SIZE];
    unsigned fieldSize, counter = 0;
    char player1Sym, player2Sym;

    initializeGame(field, fieldSize, player1Sym, player2Sym);

    while (!winCondition(field, player1Sym, player2Sym, fieldSize) && !filledField(field, fieldSize))
    {
        printField(field, fieldSize);
        //depending on if the turn is even or odd the field takes the player 1 or player 2 symbol
        playerTurn((counter++ % 2) == 0 ? player1Sym : player2Sym, field, fieldSize);
    }
}