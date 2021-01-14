#include <iostream>
using namespace std;

double caluclateExpressionHelper(double x, double y, int i, int n) {
    if(i > n) {
        return y;
    }
    return caluclateExpressionHelper(x, y*x+i, i+1, n);
}

double caluclateExpression(double x, int n) {
    return caluclateExpressionHelper(x, 1, 2, n);
}

int main() {

	double x = 0.0;
	int n = 0;
	cout << "x: ";
	cin >> x;

	cout << "n: ";
	cin >> n;

	cout << caluclateExpression(x, n) << endl;

	return 0;
}