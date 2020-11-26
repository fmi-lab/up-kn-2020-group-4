#include <iostream>
using namespace std;

const size_t MAX_ARRAY_SIZE = 1000;

size_t getSizeOfArray() {
   cout << "Insert size of array: ";
   size_t size = 0;
   cin >> size;
   return size;
}

void printArray(int numbers[], size_t size) {
   for (int i = 0; i < size; i++) {
      cout << numbers[i] << " ";
   }
   cout << endl;
}

void insertElementMultiplesByFive(int numbers[], size_t size) {
   for (int i = 0; i < size; i++) {
      numbers[i] = (i + 1) * 5;
   }
}

int main() {

    int numbers[MAX_ARRAY_SIZE] = {};
   size_t size = getSizeOfArray();

   insertElementMultiplesByFive(numbers, size);
   printArray(numbers, size);

   return 0;
}