#include <iostream>
using namespace std;
int main(){
int number, divisor, remainder, sum=0;
cout<< "Enter the nunmber: ";
cin >> number;
remainder = number % 10;
cout << "last digit: " << remainder;
sum += remainder;
divisor = number/10;
while(divisor > 9){
    remainder = divisor % 10;
    divisor /= 10;
} 
cout << "\nThe first digit: " << divisor;
sum += divisor;
cout << "\nThe sum is " << sum;
}