//Write a program to remove non-alphabet character from string
#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char word[100];

    cout<<"Please enter any word: ";
    cin.getline(word,100);

    for(int i=0; word[i]!='\0';i++){
        if((word[i]>='a' && word[i]<='z') || (word[i]>='A' && word[i]<='Z')){
            cout<<word[i];
        }else if(word[i]==' '){
            continue;
        }
    }
    return 0;
}