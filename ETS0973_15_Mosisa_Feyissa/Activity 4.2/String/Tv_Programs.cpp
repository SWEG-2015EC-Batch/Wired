//Write a program to store and print the names of your two favorite television programs. 
//Initialize one of the strings (assign it the first program’s name) at the time you declare the array. 
//Initialize the second value in the body of the program with the strcpy() function.

#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;

int main(){
    char program1[]="Scorpion";
    char program2[100];

    strcpy(program2,"The Last Ship");

    cout<<"\nMy favorite television are: "<<program1<<" and "<<program2<<endl;

    return 0;
}