//Write a program that asks the user for its first, middle and last name and 
//then prints the user’s initials on-screen by printing the first character of each name.

#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char First[50];
    char Middle[50];
    char Last[50];
   
    
    cout<<"Enter your first name: ";
    cin.getline(First,50);
    cout<<"Enter your middle name: ";
    cin.getline(Middle,50);
    cout<<"Enter your last name: ";
    cin.getline(Last,50);
    
cout<<First[0]<<". ";
cout<<Middle[0]<<". ";
cout<<Last[0]<<". ";

return 0;
}