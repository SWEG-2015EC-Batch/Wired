// Find the sum of the digits of the a given number
#include <iostream>
using namespace std;
int main() {
int number,remainder, sum = 0;
cout << "Enter the number: ";
cin >> number;
while(number>0){
remainder = number % 10;
sum += remainder;
number /= 10;
}
cout << "The sum of the digit is " << sum;
}
