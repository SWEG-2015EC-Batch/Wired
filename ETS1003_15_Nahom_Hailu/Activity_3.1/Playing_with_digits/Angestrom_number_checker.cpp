//Program to Check if a number is Armstrong or not.
#include <iostream>
#include <math.h>
using namespace std;
int main(){
int number, divisor, remainder, checkerNumber(0);
cout << "Enter the number: ";
cin >> number;
remainder = number % 10; 
checkerNumber += pow(remainder,3);
divisor = number / 10;
while(divisor > 0) {
remainder = divisor % 10;    
checkerNumber += pow(remainder,3); 
divisor = divisor / 10;
}
if (checkerNumber == number){
cout << "The number is angestrom number.";
}else {
cout << "The number is not angestrom number.";   
}
}
