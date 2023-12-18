// program to compute the number of digit
#include <iostream>
using namespace std;
int main() {
int number, count(0), divisor;
cout << "enter the number ";
cin >> number;
while(number>0) {
    number /= 10;
    count++;
}
cout << "The number of digit of " << " is "<< count;
}