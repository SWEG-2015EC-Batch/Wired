// Program to print rectangle star
#include <iostream>
using namespace std;
int main(){
int row,colomn, i(1),j(1);
cout<< "This program make you rectangle with stars.\n";
cout << "enter row: ";
cin >> row;
cout << "enter colomn: ";
cin >> colomn;
// loop for more row
while(row>=i){
// looping for more colomn
    while(colomn>=j){
        cout<<"*  ";
        j++;
    }
j=1;
cout<<endl;
i++;
}
}
