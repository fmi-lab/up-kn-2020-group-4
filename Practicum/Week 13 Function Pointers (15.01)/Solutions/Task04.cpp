#include <iostream>

using std::cin;
using std::cout;
using std::endl;

enum TableCell {
    NOT_PLAYED,
    PLAYER1,
    PLAYER2
};

enum WinSeq {
    NONE,
    VERTICAL,
    HORIZONTAL,
    DIAGONAL
};

void initField(TableCell table[][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            table[i][j] = NOT_PLAYED;
        }
    }
}

void print(TableCell table[][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            switch (table[i][j]) {
                case PLAYER1:
                    cout << "X ";
                    break;

                case PLAYER2:
                    cout << "O ";
                    break;

                default:
                    cout << "  ";
                    break;
            }
        }
        cout << endl;
    }
}

WinSeq check(TableCell table[][3]) {

    if ((table[0][0] == table[1][1] && table[1][1] == table[2][2] && table[2][2] != NOT_PLAYED) 
            || (table[0][2] == table[1][1] && table[1][1] == table[2][0]&& table[2][0] != NOT_PLAYED)) {
        return DIAGONAL;
    }

    if ((table[0][0] == table[1][0] && table[1][0] == table[2][0] && table[2][0] != NOT_PLAYED) 
            || (table[0][1] == table[1][1] && table[1][1] == table[2][1] && table[2][1] != NOT_PLAYED) 
            || (table[0][2] == table[1][2] && table[1][2] == table[2][2] && table[2][2] != NOT_PLAYED)) {
        return HORIZONTAL;
    }

    if ((table[0][0] == table[0][1] && table[0][1] == table[0][2] && table[0][2] != NOT_PLAYED) 
            || (table[1][0] == table[1][1] && table[1][1] == table[1][2] && table[1][2] != NOT_PLAYED) 
            || (table[2][0] == table[2][1] && table[2][1] == table[2][2] && table[2][2] != NOT_PLAYED)) {
        return VERTICAL;
    }

    return NONE;
}

int main() {

    TableCell table [3][3];
    WinSeq result = NONE;
    int n = 0;
    bool player1Play = true;
    
    initField(table);

    do {
        int i, j;

        do {
            cout << (player1Play ? "Player 1: " : "Player 2: ");
            cin >> i >> j;
        }
        while(i < 1 || i > 3 || j < 1 || j > 3);
        
        table[i - 1][j - 1] = player1Play ? PLAYER1 : PLAYER2;

        print(table);

        result = check(table);

        player1Play = !player1Play;
        n++;

    } while(n < 9 && result == NONE);

    if (result == NONE) {
        cout << "No winner";
    } else {
        cout << (player1Play ? "Player 2 " : "Player 1 ") << "win by ";
        switch (result){
            case VERTICAL:
                cout << "vertical";
                break;

            case HORIZONTAL:
                cout << "horizontal";
                break;

            case DIAGONAL:
                cout << "diagonal";
                break;
                
        }
    }

    return 0;
}