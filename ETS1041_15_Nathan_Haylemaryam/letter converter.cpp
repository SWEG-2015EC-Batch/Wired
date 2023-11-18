// converting a letter entered from the keyboard to its uppercase or lower case equivant
#include<iostream>
#include<ctype.h>
using namespace std;
int main () {
    char letter , newletter;
    cout << "enter your letter:";
    cin>> letter;
    if (isupper(letter) == true) {
        newletter = tolower(letter);

    }else 
    
    {
        newletter = toupper(letter);

    
    }
    cout << "newletter is:"<<newletter<<endl;
    return 0;
}
