#include <iostream>
#include <string.h>
using namespace std;
int main(){
    string name;
    int vowel(0),consonant(0);
    cout << "enter the name : ";
    getline(cin,name);
    for(int i=0;i<name.size();++i){
        if(isalpha(name[i])){
        if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u'||name[i]=='A'||name[i]=='E'||name[i]=='I'||name[i]=='O'||name[i]=='U')
        vowel++;
        else
        consonant++;
        }
    }
    cout <<endl<< "vowel: "<< vowel<<" consonant: "<< consonant;
}
