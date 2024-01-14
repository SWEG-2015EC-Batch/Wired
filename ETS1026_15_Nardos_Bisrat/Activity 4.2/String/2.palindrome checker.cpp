#include <iostream>
#include <string>

using namespace std;

int main() {
    string word;
    bool isPalindrome = true;

    cout << "Enter a word: ";
    cin >> word;

    int length = word.length();

    
    for (int i = 0; i < length / 2; ++i) {
        if (word[i] != word[length - i - 1]) {
            isPalindrome = false;
            break;  
        }
    }

    if (isPalindrome) {
        cout << word << " is a palindrome." << endl;
    } else {
        cout << word << " is not a palindrome." << endl;
    }

    return 0;
}
