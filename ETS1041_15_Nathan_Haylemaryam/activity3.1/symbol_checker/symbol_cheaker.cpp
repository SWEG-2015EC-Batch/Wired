#include <iostream>
#include <string.h>
#include <ctype.h>
using namespace std;
int main() {
char letter;
cout << "Enter the charcter: ";
cin >> letter;
bool alphaChecker = isalpha(letter);
if(alphaChecker == true) {
        if(isupper(letter) == true){
            if(letter == 'A' || letter == 'E' ||letter == 'I' ||letter == 'O' ||letter == 'U'){
                cout << "Letter is uppercase and vowel letter.";
                     } else{
                    cout << "Letter is uppercase and consonant.";
                    }
             }else{
                 if(letter == 'a' || letter == 'e' ||letter == 'i' ||letter == 'o' ||letter == 'u'){
                 cout << "Letter is lowercase and vowel letter.";
                     } else{
                    cout << "Letter is lowercase and consonant.";
                    }
                }
}else if(isdigit(letter)== true){
            int digit = atoi(&letter); // changing character to number
            cout << digit;
                if(digit % 2 == 0){
                    cout << "Letter is even number";
                    }else{
                        cout<< "Letter is odd number";
                    }
        } else{
         cout << "You entered a symbol.";
         }
}
