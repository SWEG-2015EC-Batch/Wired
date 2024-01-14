#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    int vowels = 0, consonants = 0, digits = 0, specialChars = 0;
 cout << "Enter a string: ";
    getline(cin, str);

    for (char c : str) {
        if (isalpha(c)) {
            c = tolower(c);  // Convert to lowercase for vowel check
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        } else if (isdigit(c)) {
            digits++;
        } else {
            specialChars++;
        }
    }
    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;
    cout << "Digits: " << digits << endl;
    cout << "Special Characters: " << specialChars << endl;

    return 0;}
