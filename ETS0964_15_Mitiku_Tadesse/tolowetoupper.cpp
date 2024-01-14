#include <iostream>
#include <string>  
using namespace std;
int main() {
    string text;

    cout << "Enter a line of text: ";
    getline(cin, text);  

    string cap = text; 
    string small = text;

    for (int i = 0; i < cap.length(); i++) {
        cap[i] = toupper(cap[i]);
    }

    
    for (int i = 0; i < small.length(); i++) {
        small[i] = tolower(small[i]);
    }

    cout << "All uppercase: " << cap << endl;
    cout << "All lowercase: " << small << endl;

    return 0;
}

