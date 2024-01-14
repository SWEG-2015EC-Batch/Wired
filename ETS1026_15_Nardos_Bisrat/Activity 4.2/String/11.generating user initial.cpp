#include <iostream>
#include <string>

using namespace std;

int main() {
    string firstName, middleName, lastName;

    cout << "Enter your first name: ";
    cin >> firstName;

    cout << "Enter your middle name : ";
    cin >> middleName;

    cout << "Enter your last name: ";
    cin >> lastName;

    // Extract first character of each name
    char firstInitial = firstName[0];
    char middleInitial = middleName[0];
    char lastInitial = lastName[0];

    cout << "Your initials are: " << firstInitial << middleInitial << lastInitial << endl;

    return 0;
}

