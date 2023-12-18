//This is a program that tells whether a character entered from the keyboard is in upper case or in lower case or digit or special character.
//also checkes if the number is eve/odd and also the alphabet is vowel or consonant. [
#include<iostream>
using namespace std;

int main(){
    char character;

    cout<<"Enter any character you want to check: ";
    cin>>character;

    //Checking if the given character is upper case or lower case
    if (character>='A' && character<='Z'){
        if(character=='A' || character=='E' || character=='I'|| character=='O' || character=='U'){
            cout<<"The character \'"<<character<<"\' is Vowel and it is an uppercase";
        }else{
            cout<<"The character \'"<<character<<"\' consonant in uppercase form";
            }
    //Checking if the given character is vowel or consonant
    }else if(character>='a' && character<='z'){
        if(character=='a' || character=='e' || character=='i'|| character=='o' || character=='u'){
            cout<<"The character \'"<<character<<"\' Vowel in lowercase form";
        }else{
            cout<<"The character \'"<<character<<"\' consonant in lowercase form";
            }
    //Checking if the given character is even or odd
    }else if(character>='0' && character<='9'){
        int num=character-'0';
        if(num%2==0){
            cout<<"The character \'"<<num<<"\' is even";
        }else{
            cout<<"The character \'"<<num<<"\' is odd";
        }
    }else{  
        //Checking if the given character is not among the above print that the given character is special character
            cout<<"The chararcter \'"<<character<<"\' is special character";
        }
        
    return 0;
}