#include <iostream>
using namespace std;
int main(){
int side,j(1);
cout << "enter the side: ";
cin>> side;
for(int i=1;i<=side;i++){
    for(int k=1;k<=j;k++){
        cout << char(64+k)<< "  ";
    }
    j++;
    cout << endl;
}
}
