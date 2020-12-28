
#include <iostream>
#include <string.h>

void ifEqual(char base[], char toBeReplaced[], char replacement[], int length_toBeReplaced)
{
    int i = 0;
    int j = 0;
    while (base[i] != '\0')
    {
        if (base[i] == toBeReplaced[j])
        {
            j++;
        }
        else if (base[i] == toBeReplaced[0])
        {
            j = 1;
        }
        else
        {
            j = 0;
        }

        if (j == length_toBeReplaced)
        {
            for (int k = 0; k < j; k++)
            {
                base[i - k] = replacement[j - k - 1];
            }
            j = 0;
        }
        i++;
    }
}

void ifReplacementIsShorter(char *base, char *toBeReplaced, char *replacement, int length_base, int length_toBeReplaced, int length_replacement)
{
    int i = 0;
    int j = 0;
    while (base[i] != '\0')
    {
        if (base[i] == toBeReplaced[j])
        {
            j++;
        }
        else if (base[i] == toBeReplaced[0])
        {
            j = 1;
        }
        else
        {
            j = 0;
        }

        if (j == length_toBeReplaced)
        {
            int difference = length_toBeReplaced - length_replacement;
            int lastIndex = 0;
            for (int k = length_toBeReplaced; k > difference; k--)
            {
                base[i - k + 1] = replacement[length_toBeReplaced - k];
                lastIndex = i - k + 1;
            }

            for (int q = lastIndex + 1; q < strlen(base); q++)
            {
                base[q] = base[q + difference];
            }
            i -= difference;
            j = 0;
        }
        i++;
    }
}

void ifReplacementIsLonger(char *base, char *toBeReplaced, char *replacement, int length_base, int length_toBeReplaced, int length_replacement)
{
    int i = 0;
    int j = 0;
    while (base[i] != '\0')
    {
        if (base[i] == toBeReplaced[j])
        {
            j++;
        }
        else if (base[i] == toBeReplaced[0])
        {
            j = 1;
        }
        else
        {
            j = 0;
        }
        if (j == length_toBeReplaced)
        {
            int length = strlen(base);
            int difference = length_replacement - length_toBeReplaced;
            for (int q = length - 1; q > i; q--)
            {
                base[q + difference] = base[q];
            }
            base[length + difference] = '\0';
            for (int k = 0; k < length_replacement; k++)
            {
                base[i - length_toBeReplaced + k + 1] = replacement[k];
            }
            i += difference;
            j = 0;
        }
        i++;
    }
}

int main()
{
    char base[1000];
    std::cout << "Enter sentence:" << std::endl;
    std::cin.getline(base, 1000);
    std::cout << "Enter word to be replaced:" << std::endl;
    char toBeReplaced[100];
    std::cin.getline(toBeReplaced, 100);
    std::cout << "Enter replacement: " << std::endl;
    char replacement[100];
    std::cin.getline(replacement, 100);

    int length_base = strlen(base);
    int length_replacement = strlen(replacement);
    int length_toBeReplaced = strlen(toBeReplaced);

    if (length_replacement == length_toBeReplaced)
    {
        ifEqual(base, toBeReplaced, replacement, length_toBeReplaced);
    }
    else if (length_toBeReplaced > length_replacement)
    {
        ifReplacementIsShorter(base, toBeReplaced, replacement, length_base, length_toBeReplaced, length_replacement);
    }
    else
    {
        ifReplacementIsLonger(base, toBeReplaced, replacement, length_base, length_toBeReplaced, length_replacement);
    }

    std::cout << base;

    return 0;
}
