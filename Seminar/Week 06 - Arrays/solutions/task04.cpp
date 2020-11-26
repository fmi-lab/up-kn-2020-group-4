#include <iostream>
using namespace std;

const size_t MAX_ARRAY_SIZE = 1000;

size_t getSizeOfArray() {
   cout << "Insert size of array: ";
   size_t size = 0;
   cin >> size;
   return size;
}

void insertArrayElements(int numbers[], size_t size) {
   for (int i = 0; i < size; i++) {
      cin >> numbers[i];
   }
}

void printReversedArray(int numbers[], size_t size) {
   for (int i = size - 1; i >= 0; i--) {
      cout << numbers[i] << " ";
   }
   cout << endl;
}

int main() {

   int numbers[MAX_ARRAY_SIZE] = {};
   size_t size = getSizeOfArray();

   insertArrayElements(numbers, size);
   printReversedArray(numbers, size);

   return 0;
}