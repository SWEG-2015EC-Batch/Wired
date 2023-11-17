// Program to calculate BMI//
#include <iostream>
using namespace std;
int main() {
    float heigth,weigth = 0;
    cout  << "Enter your weigth in Kg "<< endl; 
    cin >> weigth; // read weigth//
    cout  << "Enter your heigth in meter" << endl;
    cin >> heigth; // read heigth//
    cout << "Your BMI is " << (weigth)/((heigth*heigth));
    return 0;
}
