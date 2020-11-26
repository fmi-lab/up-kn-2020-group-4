#include <iostream>
using namespace std;

const size_t MAX_ARRAY_SIZE = 1000;

void printArray(int numbers[], size_t size) {
   for (int i = 0; i < size; i++) {
      cout << numbers[i] << " ";
   }
   cout << endl;
}

int main() {

   int numbers[MAX_ARRAY_SIZE] = {2, 1, 4, 5, 11};
   size_t size = 5;

   printArray(numbers, 5);
   
   return 0;
}