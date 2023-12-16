// program to draw open rectangle
#include <iostream>
using namespace std;
int main(){
int row,colomn, i(1),j(1);
cout<< "This program make you open rectangle with stars.\n";
cout << "enter row: ";
cin >> row;
while (row<1) {
cout << "enter valid row: ";
cin >> row;    
}
cout << "enter colomn: ";
cin >> colomn;
while(colomn < 1){
cout<< "enter valid colomn";
cin >> colomn;
}
// looping its row
while(row>=i){
if(i==1 || i == row){
while(colomn>=j){
    cout<< "*  ";
    j++;
}
 cout << endl;
 j=1;
 i++;
continue; // return to looping its row
} 
while(colomn>=j){
if(j == 1 || colomn == j){
cout<< "*  ";
j++;
continue;  
}
cout << "   ";
j++; 
}
cout<< endl;
j=1;
i++;
}}
