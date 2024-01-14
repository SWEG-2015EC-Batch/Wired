#include <iostream>
#include <string.h>
using namespace std;
int main(){
string name;
cout << "enter your name : ";
getline(cin,name);
int size = name.size();
for(int i=0;i<size;i++){
    if(name[i]!=name[size-i-1]){
    cout << "your name is not palindrome";
    return 0;
    }
}
cout << "\nyour name  is palindrome";
}
