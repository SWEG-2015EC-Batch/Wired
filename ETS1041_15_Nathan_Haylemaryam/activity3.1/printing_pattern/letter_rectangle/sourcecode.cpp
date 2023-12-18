#include <iostream>
#include <ctype.h>
using namespace std;
int main(){
char letter;
int row,colomn;
cout<< "Enter the raw: ";
cin>> row;
cout<< "Enter the colomn: ";
cin>> colomn;
    for(int i=1; i<=row;i++){
        for(int j=1;j<=colomn;j++){
            cout << char(96+j)<< "  ";
        }
        cout << endl;
    }
}
