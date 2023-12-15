#include <iostream>
using namespace std;
int main(){
int side, i(1),j,k(1);
cout<< "This program will make inverted half pyramid \n";
cout << "Enter the side ";
cin >> side;
j=side;
// row loop
while(side >= i){
// for first row
if (i==1){
for(k=1;j>=k;){
    cout << "*  ";
    k++;
    }
cout<<endl;
j--;
i++;
continue;
}
// other rows
for(k=1;j>=k;){
if(k==1 || k==j){
cout <<"*  ";
k++;
continue;
}
cout << "   ";
k++;
}
j--; // decrease size of loop
cout<< endl; 
i++; // for next row 
}    
}
