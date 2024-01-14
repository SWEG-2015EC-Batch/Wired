#include <iostream>
#include <iomanip>
using namespace std;
int main(){
int size1,size2;// size of array
cout <<" enter the number of row of array: ";
cin >> size1;
cout <<" enter the number of colomn of array: ";
cin >> size2;
int number[size1][size2];
int productRow[size1],sumColomn[size2]{0};
cout << "Enter the element"<<endl;
    for(int i=0;i<size1;i++){
        productRow[i]=1;
        for(int j=0;j<size2;j++){         
            cout << "enter row-"<<i+1<<" col-"<<j+1<<": ";
            cin >> number[i][j];
            cout << endl;
            productRow[i] *= number[i][j];
            sumColomn[j] += number[i][j]; 
        }
    }
cout << "row" <<setw(10)<< "product"<< endl;
for (int i=0;i<size1;++i){
cout << i+1 <<setw(10)<< productRow[i]<< endl;    
}
cout << "colomn" <<setw(10)<< "sum"<< endl;
for (int i=0;i<size2;++i){
cout << i+1 <<setw(10)<< sumColomn[i]<< endl;    
}
}