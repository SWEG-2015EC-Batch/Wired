#include <iostream>
#include <iomanip>
using namespace std;
int main(){
int number[3][4];
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout << "enter row-"<<i+1<<" col-"<<j+1<<": ";
            cin >> number[i][j];
        }
    }
    for(int i=0;i<3;i++){ 
    cout << endl;     
        for(int j=0;j<4;j++){
            if(number[i][j]%2 == 0)
            cout<< setw(5) << number[i][j];
            else 
            cout <<setw(5)<< "*";
            }            
        }
}
