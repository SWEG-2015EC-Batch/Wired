//Swap the first and the last digit of the number
#include <iostream>
#include <math.h>
using namespace std;
int main() {
int number,swapNumber(0),remainder,divisor,count=0;
cout << "Enter the number: ";
cin >> number;
remainder = number % 10;
int lastDigit = remainder;
divisor = number / 10;
while(divisor > 9){
remainder= divisor % 10;
count++;
swapNumber= swapNumber + (remainder * pow(10,count));
divisor /= 10;
}
swapNumber = swapNumber + (lastDigit * pow(10,count+1)) + divisor;
cout << "The swaped number is:" << swapNumber;
}