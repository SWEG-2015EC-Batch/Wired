#include <iostream>

using namespace std;

int main() {
   int size, num;
   const int MAX_SIZE = 100;  // Set a maximum size for the array
   int evenNumbers[MAX_SIZE];
   int evenCount = 0;

   cout << "Enter number of elements (up to " << MAX_SIZE << "): ";
   cin >> size;

   for (int i = 0; i < size; ++i) {
       cout << "Enter element " << (i + 1) << ": ";
       cin >> num;
       if (num % 2 == 0) {
           evenNumbers[evenCount++] = num;  // Store even numbers in the array
       }
   }

   cout << "Even numbers in reverse order: ";
   for (int i = evenCount - 1; i >= 0; --i) {
       cout << evenNumbers[i] <<" ";
   }

   cout << endl;

   return 0;
}

