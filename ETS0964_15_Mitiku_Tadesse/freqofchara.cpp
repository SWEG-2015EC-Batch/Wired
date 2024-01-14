// aprogram that find the frequency of characters display the largest 
#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main() {
    string text;
    cout << "Enter the text, please: ";
    getline(cin, text);

    int length = text.length();
    cout << "\nSize of the entered text: " << length << " characters\n";

    int letterCounts[26] = {0};

    char ch;
    for (int i = 0; i < length; i++) {
        ch = tolower(text[i]);
        if (ch >= 'a' && ch <= 'z') {
            letterCounts[ch - 'a']++;
        }
    }

    
    cout << "\nLetter Frequencies:\n";
   

    for (char letter = 'a'; letter <= 'z'; letter++) {
        if (letterCounts[letter - 'a'] > 0) {
            cout << letter << "\t" << letterCounts[letter - 'a'] << endl;
        }
    }

    return 0;
}
