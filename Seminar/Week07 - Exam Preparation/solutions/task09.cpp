#include <iostream>
#include <cmath>
using namespace std;

int getLen(int num) {
	int len = 0;
	while(num) {
		num/=10;
		len++;
	}
	return len;
}

int removeDigit(int &num, int k) {
	int len = getLen(num);
	int powOfOst = pow(10, len-k);
	int ost = num % powOfOst;
	num /= pow(10, len -(k-1));
	num = num * powOfOst + ost;

	return num;
}

int main() {


	int num = 0, k = 0;
	cout << "Number : ";
	cin >> num;
	cout << "k : ";
	cin >> k;

	cout << removeDigit(num, k) << endl;

 	return 0;
}