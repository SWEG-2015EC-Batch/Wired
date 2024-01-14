#include <iostream>
#include <string.h>
using namespace std;
int main(){
string name;
cout << "enter the name : ";
getline(cin,name);
int size = name.size();
for(int i=0;i<size;i++){
    if(name[i]!=name[size-i-1]){
    cout << "not palindrome";
    return 0;
    }
}
cout << "\nIt is palindrome";
}