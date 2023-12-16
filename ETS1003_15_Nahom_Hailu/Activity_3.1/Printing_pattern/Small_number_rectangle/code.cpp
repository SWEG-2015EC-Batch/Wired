//Program to draw rectangle with number
#include <iostream>
using namespace std;
int main(){
    int row , colomn, i(1),j(1);
    cout << "Wellcome This program will make rectangle with small consqutive number\n";
    cout <<"enter the row:";
    cin >> row;
    cout << "enter the colomn";
    cin >> colomn;
// loop for rows
for(;i<=row;i++){
    for(j=1;j<=colomn;j++){
        cout << j <<"  "; //  
    }
    cout << endl; // new line inserting
}
}
