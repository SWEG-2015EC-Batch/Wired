#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string firstName, middleName, lastName;

    
    cout << "Enter your first name: ";
    cin >> firstName;

    cout << "Enter your middle name: ";
    cin >> middleName;

    cout << "Enter your last name: ";
    cin >> lastName;

    
    cout << "\nYour initials are: "
         << toupper(firstName[0]) << toupper(middleName[0]) << toupper(lastName[0]) << endl;

    return 0;
}
