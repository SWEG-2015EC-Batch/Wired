//Program to change the letter to captial or small letter//
#include <iostream>
#include <ctype.h>
using namespace std;
int main() {
    char letter;
    char newLetter; // new created letter//
    cout << "Enter the letter" << endl;
    cin >> letter;
    if (isupper(letter) == true) {
        newLetter = tolower(letter);
    } else {
        newLetter = toupper(letter);
    }
    cout << "New letter is  \""<<newLetter << "\""; 
}
