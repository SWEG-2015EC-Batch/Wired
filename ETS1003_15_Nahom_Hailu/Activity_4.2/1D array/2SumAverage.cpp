#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;
int main(){
    int number[8],sum(0);
    for(int i=0;i<8;i++){
        cout << "enter number"<<i+1<<" : ";
        cin >> number[i];
        sum+=number[i];
    }
    cout << "\nThe numbers are: "; 
      for(int i=0;i<8;i++){
        cout << number[i]<< setw(10);
    }
    double average = sum/8.0;
    cout <<"sum: "<<sum<<"\nAverage: "<<average;
}
