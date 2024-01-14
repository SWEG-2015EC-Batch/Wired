#include <iostream>
#include <string>  

using namespace std;

int main() {
    string word;
    int vowels = 0, consonants = 0;

    cout << "Enter a word: ";
    getline(cin, word);  
    for (int i = 0; i < word.length(); i++) {
        char ch = tolower(word[i]); 

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++;
        } else if (isalpha(ch)) {  
            consonants++;
        }
    }

    cout << "Number of vowels: " << vowels << endl;
    cout << "Number of consonants: " << consonants << endl;

    return 0;
}
