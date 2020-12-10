#include <iostream>

const int N = 20;

void read(char array[], int &n)
{
    std::cin >> n;

    for (int i = 0; i < n; i++) 
    {
        std::cin >> array[i];
    }
}

void putDigitOnPosition(char elem, int pos, char array[], int &n)
{
    for (int i = n; i > pos; i-- ) 
    {
        array[i] = array[i - 1];
    }

    array[pos] = elem;
    n++;
}

void fillDigits(char array[], int &n)
{
    int maxDigit = n - 1;
    for (int i = 0; i < maxDigit; i++) {
        char digit = i + '0';
        int position = i * 2 + 1;
        putDigitOnPosition(digit, position, array, n);
    }
}

void print(char array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << array[i];
    }
}

int main() {
    int n;
    char input[N];

    read(input, n);
    fillDigits(input, n);
    print(input, n);

    return 0;
}