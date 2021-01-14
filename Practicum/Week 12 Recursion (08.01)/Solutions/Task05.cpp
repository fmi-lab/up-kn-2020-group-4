#include <iostream>

const int MAX_LENGTH = 100;

int strlen(const char *text)
{
    int len = 0;

    while (text[len])
    {
        ++len;
    }

    return len;
}

bool isPalindrome(const char *text, int start, int end) {
    if (start >= end) {
        return true;
    }

    if (text[start] != text[end]) {
        return false;
    }

    return isPalindrome(text, start+1, end-1);
}

int main()
{
    char word[MAX_LENGTH];
    int n;

    std::cin >> word;
    n = strlen(word);

    std::cout << (isPalindrome(word, 0, n-1) ? "YES" : "NO");

    return 0;
}