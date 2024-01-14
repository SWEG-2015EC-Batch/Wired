// remove the non alphabet from the character
#include <iostream>
#include <cstring> 
#include <cctype> 
using namespace std;

int main() {
    string text;
    cout << "Enter the word: ";
    cin >> text;

    string result = "";
    for (int i = 0; i < text.length(); i++) {
        if (isalpha(text[i])) {
            result += text[i];
        }
    }

    cout << "Result after removing non-alphabetic characters: " << result << endl;
    return 0;
}