#include <iostream>
#include <cctype> 

using namespace std;

int main() {
    
    string inputText;

    
    cout << "Enter a line of text: ";
    getline(cin, inputText);

   
    cout << "\nText in all UPPERCASE: ";
    for (char ch : inputText) {
        cout << (char)toupper(ch);
    }

    
    cout << "\nText in all lowercase: ";
    for (char ch : inputText) {
        cout << (char)tolower(ch);
    }

    cout << endl;

    return 0;
}
