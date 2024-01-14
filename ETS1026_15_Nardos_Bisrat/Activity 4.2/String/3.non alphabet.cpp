#include <iostream>
#include <string>

using namespace std;

int main() {
    string originalString;
    string alphabetOnlyString;

    cout << "Enter a string: ";
    getline(cin, originalString);  // Use getline to capture spaces as well
   
    for (char c : originalString) {
        if (isalpha(c)) {  
            alphabetOnlyString += c;
        }
    }
    cout << "String with only alphabets: " << alphabetOnlyString << endl;

    return 0;
}

