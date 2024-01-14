//Write an application that inputs a line of text, and tokenizes it. Use space characters as delimiters.
#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char sentence[100];

    cout<<"Write one line of sentence: ";
    cin.getline(sentence,100);
    cout<<endl;
    
    cout<<"The tokenized text becomes: "<<endl;
    
    for(int i=0; i<strlen(sentence); i++){
        if(sentence[i]==' '){
            cout<<"\n";
        }else{
            cout<<sentence[i];
        }
    }
    return 0;
}