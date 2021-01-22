#include <iostream>

using std::cin;
using std::cout;
using std::endl;

typedef char (*transformFn)(char letter);

int strlen(char word[]) {
    int i = 0;

    while (word[i] != '\0') {
        i++;
    }

    return i;
}

char toUpper(char letter) {
    if ('a' <= letter && letter <= 'z') {
        return letter + ('A' - 'a');
    } 
    
    return letter;
}

char toLower(char letter) {
    if ('A' <= letter && letter <= 'Z') {
        return letter - ('A' - 'a');
    }

    return letter;
}

void transform(transformFn fn, char word[]) {
    int len = strlen(word);

    for (int i = 0; i < len; i++) {
        word[i] = fn(word[i]);
    }
}

int main() {
    char word[100];

    cin.getline(word, 100, '\n');

    transform(toLower, word);
    cout << word << endl;

    transform(toUpper, word);
    cout << word << endl;

    return 0;
}