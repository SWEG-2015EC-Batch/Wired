//Write an application that inputs a line of text and outputs the text twice, 
//once in all uppercase and once in all lowercase letters.

#include<iostream>
#include<cstring>
#include<cctype>  
using namespace std;

int main() {
    char text[100];
    cout<<"Enter your text: ";
    cin.getline(text,100);
    char lower[100];
    char upper[100];
    cout << "\nLowercase text: ";
    for(int i=0;text[i]!='\0';i++){
      lower[i]=tolower(text[i]);
      cout<<lower[i];
    }
    cout<<endl;
    cout << "Uppercase text: ";
    for(int i=0;text[i]!='\0';i++){
      upper[i]=toupper(text[i]);
      cout<<upper[i];
    }
    cout<<endl;

    return 0;
}
