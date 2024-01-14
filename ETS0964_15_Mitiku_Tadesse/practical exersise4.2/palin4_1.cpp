// a program that check up if the letter is palindrome
#include <iostream>
#include <string>
using namespace std;
bool is_palindrome(string text){
        for( int i=0; i<text.length()/2; i++){
            if(text[i]!=text[text.length()-i-1]){
            return false;
      
        }
     }
     return true;
   }
    int main(){
     string text;
     cout<<"enter the word you want to check up :";
     cin>>text;
     if(is_palindrome(text)){
        cout<<"the word "<<text<<" is a palindrome "<<endl;
     }else{
        cout<<"the word "<<text<<" is not palindrome "<<endl;

     }
     
     return 0;
}
