#include <iostream>
#include <cmath>
using namespace std;

int main() {

	double a = 0.0, b = 0.0, c = 0.0;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "c = ";
	cin >> c;


	double res1 = a - b + pow(b, 2) * pow(a, 3) - pow(c, 3);
	double res2 = a * sqrt(b) - sqrt(pow(a, 3)) * sqrt(c);
	double res3 = abs(pow(c, 3) - pow(a, 3) * pow(b, 2)) + pow(a, 2);
	double res4 = cos(180/6) * c + sin(180/4) * log10(a);
	double res5 = sqrt(pow(a, 3)) * pow(c, 3) + cos(180/4) * pow(a, 3);

	cout << "Result 1: " << res1 
		 << "\nResult 2: " << res2 
		 << "\nResult 3: " << res3 
		 << "\nResult 4: " << res4 
		 << "\nResult 5: " << res5 
		 << endl;


	return 0;
}