#include <iostream>
using namespace std;

bool isNum2InNum1(int num1, int num2) {
    if (num2 == 0) {
        return true;
    }

    if (num1 == 0) {
        return false;
    }

    if (num1 % 10 == num2 % 10) {
        num2 /= 10;
    }

    return isNum2InNum1(num1/10, num2);
}


int main () {

    int num1 = 0, num2 = 0;
    cout << "Enter number1: ";
    cin >> num1;
    cout << "Enter number2: ";
    cin >> num2;

    if (num1 > num2) {
        cout << boolalpha << isNum2InNum1(num1, num2) << endl;
    } else if (num2 > num1) {
        cout << boolalpha << isNum2InNum1(num2, num1) << endl;
    } else {
        cout << "Numbers are equal" << endl;
    }

    return 0;
}