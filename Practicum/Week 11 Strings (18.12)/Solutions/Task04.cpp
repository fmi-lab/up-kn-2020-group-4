#include <iostream>

const int ARRAY_SIZE_S = 500;
const int ARRAY_SIZE_D = 10;

size_t strlen(const char *text)
{
    size_t len = 0;

    while (text[len])
    {
        ++len;
    }

    return len;
}

int countChars(char S[], int size_S, char d[], int size_d)
{
    int count = 0;

    for (int i = 0; i < size_d; i++)
    {
        for (int j = 0; j < size_S; j++)
        {
            if (d[i] == S[j])
            {
                count++;
                break;
            }
        }
    }

    return count;
}

int main()
{
    char S[ARRAY_SIZE_S], d[ARRAY_SIZE_D];

    std::cin >> S >> d;

    size_t size_S = strlen(S);
    size_t size_d = strlen(d);

    std::cout << countChars(S, size_S, d, size_d);

    return 0;
}
