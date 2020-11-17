#include <iostream>
using namespace std;

int main() {

	double x = 0.0, y = 0.0, z = 0.0, result = 0.0;

	cout << "X: ";
	cin >> x;
	cout << "Y:";
	cin >> y;
	cout << "Z:";
	cin >> z;

	result = ((x*y)*(y-z))/z;
	cout << "The result is " << result << endl;
	
	return 0;
}