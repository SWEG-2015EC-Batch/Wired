#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;
int main(){
    string password = "agag4576";
    string trial;
    cout << "enter passwod: ";
    cin>> setw(8)>> trial;
    for(int i=0;i<8;i++){
        if(trial[i]!=password[i]){
        cout << "Wrong password";
        return 0;
        }
    }
    cout << "correct password";
}