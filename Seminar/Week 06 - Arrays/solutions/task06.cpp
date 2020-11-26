#include <iostream>
using namespace std;

const size_t MAX_ARRAY_SIZE = 1000;

size_t getSizeOfArray() {
   cout << "Insert size of array: ";
   size_t size = 0;
   cin >> size;
   return size;
}

int getNumber() {
   cout << "Insert k: ";
   int k = 0;
   cin >> k;
   return k;
}

void insertArrayElements(int numbers[], size_t size) {
   for (int i = 0; i < size; i++) {
      cin >> numbers[i];
   }
}

void printArray(int numbers[], size_t size) {
   for (int i = 0; i < size; i++) {
      cout << numbers[i] << " ";
   }
   cout << endl;
}

int main() {

   int numbers[MAX_ARRAY_SIZE] = {};
   size_t size = getSizeOfArray();
   insertArrayElements(numbers, size);
   int k = getNumber();

   for (int i = 0; i < size; ++i) {
      if (numbers[i] == k) {
         for (int j = i; j < size - 1; ++j) {
            numbers[j] = numbers[j+1];
         }
         size--;
         i--;
      }
   }

   printArray(numbers, size);

   return 0;
}