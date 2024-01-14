#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   const int n = 3;
   double volts[n][n] = {{11.95, 16.32, 12.15},
                          {8.22, 15.98, 26.22},
                          {13.54, 6.45, 17.59}};

   cout << setw(10) << "Column 1";
   for (int i = 1; i < n; i++) {
       cout << setw(10) << "Column " << i + 1;
   }
   cout << endl;

   for (int i = 0; i < n; i++) {
       for (int j = 0; j < n; j++) {
           cout << fixed << setprecision(2) << setw(10) << volts[i][j]; 
       }
       cout << endl;
   }

   return 0;
}



