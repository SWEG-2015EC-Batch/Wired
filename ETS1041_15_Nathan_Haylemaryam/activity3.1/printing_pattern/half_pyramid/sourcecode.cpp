#include <iostream>
using namespace std;
int main(){
int side, i(1),j(1),k(1);
cout<< "This program will make half Pyramid \n";
cout << "Enter the side ";
cin >> side;
// loop for each row 
for(;side>= i;i++){
// loop for full colomn
    for(k=1;j>=k;k++){
        cout << "*  ";
        }
    cout<< endl;
    j++; // increase size of colomn
}
}
