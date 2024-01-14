#include <iostream>
#include <string>
#include <sstream> 

using namespace std;

int main() {
    
    string inputLine;
    
    
    cout << "Enter a line of text: ";
    getline(cin, inputLine);

    
    stringstream ss(inputLine);
    string token;

    cout << "Tokens:\n";
    while (ss >> token) {
        cout << token << endl;
    }

    return 0;
}
