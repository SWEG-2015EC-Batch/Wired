#include <iostream>
#include <cctype>
#include <unordered_set>  // special charactetr

using namespace std;

int main() {
    string text;
    cout << "Enter the text you want to count: ";
    getline(cin, text); // Use getline to read the entire line

    int vowcount = 0, conscount = 0, digcount = 0, speccount = 0;

    // Define a set of special characters
    unordered_set<char> specialCharacters = { '!', '@', '#', '$', '%', '^', '&', '*', '(', ')', '_', '+', '-', '=', '{', '}', '[', ']', '|', ';', ':', ',', '.', '<', '>', '/', '?' };

    for (int i = 0; i < text.length(); i++) {
        char ch = text[i];

        if (isalpha(ch)) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                vowcount++;
            } else {
                conscount++;
            }
        } else if (isdigit(ch)) {
            digcount++;
        } else if (isspace(ch)) {
            speccount++;
        } else if (specialCharacters.find(ch) != specialCharacters.end()) {
            speccount++; // Increment for each special character in the set
        }
    }

    cout << "The total vowel in the text is: " << vowcount << endl;
    cout << "The total consonant in the text is: " << conscount << endl;
    cout << "The total special character is: " << speccount << endl;
    cout << "The total digit in the text is: " << digcount << endl;

    return 0;
}