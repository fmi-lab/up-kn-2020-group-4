#include <iostream>
using namespace std;

int main() {
    
    int n = 0;

    do {
        cout << "Enter a number:";
        cin >> n;

    } while (n < 100 || n > 30000);


    while (n > 0) {
        int i = n % 10;
        cout << i;

        for(; i > 0; --i)
        {
            cout << '*';
        }
        cout << endl;
        
        n /= 10;
    }

    return 0;
}
