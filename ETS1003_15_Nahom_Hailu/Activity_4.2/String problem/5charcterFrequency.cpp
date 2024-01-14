#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;
int main(){
    string name; 
    cout << "enter the string : ";
    int vowel(0),consonant(0),digit(0),specialcharacter(0);
    getline(cin,name);
    for(int i=0;i<name.size();i++){
        if(name[i]==' ') continue;
        if(isalpha(name[i])){
            if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u'||name[i]=='A'||name[i]=='E'||name[i]=='I'||name[i]=='O'||name[i]=='U')
        vowel++;
        else
        consonant++;
        }
    else if(isdigit(name[i]))
    digit++;
    else specialcharacter++;
    }
    cout<<"vowel"<<setw(10)<<"consonant"<<setw(10)<<"digit"<<setw(10)<<"special"<<endl;
    cout<<vowel<<setw(10)<<consonant<<setw(10)<<digit<<setw(10)<<specialcharacter<<endl;
}