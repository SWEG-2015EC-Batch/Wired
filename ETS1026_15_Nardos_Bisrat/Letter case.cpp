#include <iostream>
#include <ctype.h>

using namespace std;

int main()
{
    //declaring variables
    char letter;

    //input the letter
    cout<<"enter letter";
    cin>>letter;

    //check if it is lowercase
    if (islower(letter))
        {
        // convert to uppercase
        letter = toupper(letter);
        cout<<"Uppercase equivalent"<<letter<<endl;
    }
    else if (isupper(letter))
        {
        // convert to lowercase
        letter = tolower(letter);
        cout<<"Lowercase equivalent"<<letter<<endl;
    }
    else {
        cout<<"Invalid input. Please enter a valid letter "<<endl;
    }
    return 0;
