#include <iostream>
using namespace std;

int main() {
    
    int n = 0, num = 0, maxZero = 0, max = 0;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> num;
        int copy = num;
        int counter = 0;

        while (copy != 0) {
            if (copy % 10 == 0) {
                counter++;
            }
            copy /= 10;
        }
        
        if (counter > maxZero) {
            max = num;
            maxZero = counter;
        }
    }

    if (maxZero == 0) {

        cout << "Thete is no number with a zero" << endl;
    }

    else {

        cout << max << " has " << maxZero << " zeros" << endl;
    }

    return 0;
}
