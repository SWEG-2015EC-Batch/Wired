#include <iostream>
#include <cstring>

using namespace std;

int main() {
    
    const char correctPassword[] = "secure123";

    
    char enteredPassword[50];

    
    cout << "Enter the password: ";
    cin.getline(enteredPassword, sizeof(enteredPassword));

   
    if (strcmp(enteredPassword, correctPassword) == 0) {
        cout << "Password is correct. Welcome!\n";
    } else {
        cout << "Incorrect password. Access denied.\n";
    }

    return 0;
}
