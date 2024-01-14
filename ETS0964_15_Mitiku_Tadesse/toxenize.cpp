
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    const int n= 100;
    const int LENGTH = 50;

    char text[n][LENGTH];

    cout << "Enter a line of text: ";

   
    char ch;
    int wordIndex = 0, charIndex = 0;
    while (cin.get(ch) && ch != '\n') {
        if (ch == ' ') {
            text[wordIndex][charIndex] = '\0'; 
            wordIndex++;
            charIndex = 0; 
        } else {
            text[wordIndex][charIndex++] = ch; 
        }
    }

    text[wordIndex][charIndex] = '\0'; 

    
    cout << "\nTokenized Words:\n";
    for (int i = 0; i <= wordIndex; i++) {
        cout << "Word " << i + 1 << ": " << text[i] << endl;
    }

    return 0;
}
