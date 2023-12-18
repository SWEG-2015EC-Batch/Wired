//Find the sum of the digits of the a given number
#include <iostream>
using namespace std;
int main() {
int number, remainder, product=1;
cout << "Enter the number: ";
cin >> number;
while(number > 0){
remainder = number % 10;
if(remainder%2==0) {
    product *= remainder;
}
number = number / 10;
}
cout <<"The sum of even digit is " << product;
}
