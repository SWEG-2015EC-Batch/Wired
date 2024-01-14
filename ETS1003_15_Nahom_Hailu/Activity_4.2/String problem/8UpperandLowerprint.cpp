#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;
int main(){
        string name; 
    cout << "enter the string : ";
    getline(cin,name);
    for(int i=0;i<name.size();i++){
        if(isalpha(name[i])==false) continue;
        name[i]=toupper(name[i]);
    }
    cout << "All CAPITAL: "<<name;
    for(int i=0;i<name.size();i++){
        if(isalpha(name[i])==false) continue;
        name[i]=tolower(name[i]);
    }
    cout << "\nall small: "<<name;
}