#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;
int main(){
    string name[3];
    cout <<"Enter first name: ";
    cin >> name[0];
    cout <<"Enter middle name: ";
    cin >> name[1];
    cout <<"Enter the last name: ";
    cin >> name[2];
    cout << "User intial is: ";
    for(int i=0;i<3;i++){
        cout <<(name[i][0])<<"-";
    }
}