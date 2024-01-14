#include <iostream>
#include <cstring>

using namespace std;

int main() {
   char favoritePrograms[2][50] = {"ebs"}; 

   strcpy(favoritePrograms[1], "fana");  

   cout << "Favorite Program 1: " << favoritePrograms[0] << endl;
   cout << "Favorite Program 2: " << favoritePrograms[1] << endl;

   return 0;
}