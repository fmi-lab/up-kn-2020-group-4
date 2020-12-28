#include <iostream>

const int ARRAY_SIZE = 100;
const int NAME_SIZE = 100;

size_t strlen(const char *text)
{
    size_t len = 0;

    while (text[len])
    {
        ++len;
    }

    return len;
}

void read(char names[][NAME_SIZE], int &numberNames) 
{
    bool endCondition;

    do
    {
        std::cin >> names[numberNames];
        endCondition = strlen(names[numberNames]) == 2 && names[numberNames][0] == '#' && names[numberNames][1] == '#';
        numberNames++;
    } while (!endCondition);
}

int strcmp(const char *text1, const char *text2)
{
    while (*text1 && *text1 == *text2)
    {
        ++text1;
        ++text2;
    }
    return *text1 - *text2;
}

int main() 
{
    char names[ARRAY_SIZE][NAME_SIZE];
    int numberNames = 0;
    
    read(names, numberNames);

    for (int i = 0; i < numberNames; i++) {
        int count = 1;
        for (int j = i + 1; j < numberNames; j++) {
            if (strcmp(names[i], names[j]) == 0) {
                names[j][0] = '\0';
                count++;
            }
        }

        if (count > 1 && names[i][0] != '\0') {
            std::cout << names[i] << ' ' << count << std::endl;
        }
    }

    return 0;
}