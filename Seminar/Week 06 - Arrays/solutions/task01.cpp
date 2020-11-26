#include <iostream>
using namespace std;


void swap(int& a, int& b) {
   int temp = a;
   a = b;
   b = temp;
}


int main() {

   int a = 0, b = 0;

   cout << "a = ";
   cin >> a;
   cout << "b = ";
   cin >> b;

   swap(a, b);

   cout << "a = " << a << ", b = " << b << endl;

   return 0;
}