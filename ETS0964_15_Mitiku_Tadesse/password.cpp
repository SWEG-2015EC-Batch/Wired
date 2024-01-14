#include <iostream>
#include <cstring>

using namespace std;

int main() {
   const char password[50] = "doyouwantpassword!";
   char userpass[50];
   int attempts = 5;  
  while (attempts > 0) {
       cout << "Enter the password (attempts remaining: " << attempts << "): ";
       cin >> userpass;

       if (strcmp(userpass, password) == 0) {
           cout << "Valid password, welcome!" << endl;
           break;  
       } else {
           cout << "Invalid password. Please try again." << endl;
           attempts--;  
       }
   }

   if (attempts == 0) {
       cout << "You have finshed your attempts please try after 1 day ." << endl;
   }

   return 0;
}