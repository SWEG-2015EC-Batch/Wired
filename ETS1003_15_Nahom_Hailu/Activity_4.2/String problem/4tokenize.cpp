#include <iostream>
#include <string.h>
using namespace std;
int main(){
    string name;
    string token[20]; // Assume it is have atmost 20 token  
    cout << "enter the string : ";
    getline(cin,name);
    int j(0);
    for(int i=0;i<name.size();i++){
        if(name[i]==' '){
            j++;
            continue;
        }
        token[j]+=name[i];
    }
    cout<<"[";
    for(int i=0;i<j;i++){
        cout<<"\""<<token[i]<<"\""<<",";
        if(i==j-1)
         cout<<"\""<<token[i+1]<<"\"";
    } cout<<"]";
}