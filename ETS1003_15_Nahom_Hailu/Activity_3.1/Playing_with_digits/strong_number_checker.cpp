//Program to check if a number is Strong or not.
#include <iostream>
#include <math.h>
using namespace std;
int main(){
int number, divisor, remainder, checkerNumber(0);
cout << "Enter the number: ";
cin >> number;
remainder = number % 10; 
int product = 1;
while(remainder > 0){
    product *= remainder;
    remainder--;
}
checkerNumber += product;
product = 1;
divisor = number / 10;
while(divisor > 0) {
remainder = divisor % 10;    
while(remainder > 0){
    product *= remainder;
    remainder--;
}
checkerNumber += product;
product = 1;
divisor = divisor / 10;
}
if (checkerNumber == number){
cout << "The number is strong number.";
}else {
cout << "The number is not strong number.";   
}
}
