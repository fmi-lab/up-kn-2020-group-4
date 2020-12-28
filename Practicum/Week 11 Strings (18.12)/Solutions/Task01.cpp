#include <iostream>

int main() {
    
    int l, b[26], max = 0;
    char s[1000], maxc;

    std::cin >> l >> s;
    
    for (int i = 0; i < 26; i++) {
        b[i] = 0;
    }

    for (int i = 0; i < l; i++)
    {
        int k = s[i] - 'a';
        b[k]++;

        if (b[k] > max)
        {
            max = b[k];
            maxc = 'a' + k;
        }
    }

    std::cout << maxc << " " << max << std::endl;
}