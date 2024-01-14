#include <iostream>
#include <string.h>
using namespace std;
int main(){
    string name;
    cout << "enter the string : ";
    getline(cin,name);  
    for(int i=0;i<name.size();i++){
        if(isalpha(name[i])==false){
        name[i]='\0';
        }
    } 
    cout <<endl<< name;
}