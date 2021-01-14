#include <iostream>

const int MAX_LENGTH = 100;

int strlen_req(const char *text, int len) {
    if (text[len]) {
        return strlen_req(text, ++len);
    }

    return len;
}

int strlen(const char *text) {
    return strlen_req(text, 0);
}

int main() {

    char word[MAX_LENGTH];

    std::cin >> word;

    std::cout << strlen(word);

    return 0;
}