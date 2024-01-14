#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;
int main(){
    double number[][3]={11.95, 16.32, 12.15, 8.22, 15.98,26.22, 13.54, 6.45,17.59};
    for(int i=0;i<sizeof(number)/(sizeof(double)*3);i++){
        for(int j=0;j<3;j++){
            cout<<setw(10)<<number[i][j];
        }
        cout << endl;
        }
}