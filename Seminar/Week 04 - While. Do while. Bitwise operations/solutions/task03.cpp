#include<iostream>
using namespace std;

int main() {
	int num = 0;
	double sum = 0.0, counter = 0.0;
	cout << "Number: ";
	cin >> num;

	while (num) {
		sum += num;
		counter++;
		cout << "Number: ";
		cin >> num;
	}

	double average = sum / counter; 
	cout << "Average = " << average << endl;

	return 0;
}