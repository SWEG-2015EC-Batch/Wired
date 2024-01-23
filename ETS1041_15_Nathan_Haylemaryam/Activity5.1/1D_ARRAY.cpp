#include <iostream>
using namespace std;
int main(){
    double balance[5]={1000.0,2.0,3.4,17.0,50.0};
    int arr[3][4]={{10,11,12,13},{20,21,22,23},{30,31,32,33}};
    // print using address
    for(int i=0;i<5;i++){
        cout << balance+i<<"  "<<endl; 
    }
     for(int i=0;i<12;i++){
        cout << arr+i<<"  "<<endl; 
    }
    double *ptrBalance = &balance[0];
     for(int i=0;i<5;i++){
        cout << ptrBalance+i<<"  "<<endl; 
    }
    int *ptrarr= &arr[0][0];
    for(int i=0;i<12;i++){
        cout << ptrarr+i<<"  "<<endl; 
    }
}
