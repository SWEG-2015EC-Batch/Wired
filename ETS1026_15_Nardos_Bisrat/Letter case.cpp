// c++ program that convert upper and lower case letters to their equivalent
#include <iostream>
#include <ctype.h>
using namespace std;
int main()
{
    char letter;
    cout<<"enter letter";
    cin>>letter;
    if (islower(letter))
        {
        letter = toupper(letter);
        cout<<"Uppercase equivalent"<<letter<<endl;
    }
    else if (isupper(letter))
        {
        letter = tolower(letter);
        cout<<"Lowercase equivalent"<<letter<<endl;
    }
    else {
        cout<<"Invalid input. Please enter a valid letter "<<endl;
    }
    return 0;
}
