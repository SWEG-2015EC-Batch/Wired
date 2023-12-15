#include <iostream>
using namespace std;
int main(){
int side, i(1),k(1);
cout<< "This program will make half Pyramid \n";
cout << "Enter the side ";
cin >> side;
int j=side; // the first biggest row
// loop for row
for(;side>= i;i++){
// loop for one full colomn
    for(k=1;j>=k;k++){
        cout << "*  ";        
    }
    cout<< endl;
    j--;// decrease the row
}    
}
