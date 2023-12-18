#include <iostream>
#include <string>
using namespace std;
int main() {
    int number, divisor, remainder;
    string reverse;
    cout << "enter the number ";
    cin >> number;
    divisor = number/10;
    remainder = number%10;
    reverse = reverse + to_string(remainder);
    while(divisor>9){
    remainder = divisor%10;
    reverse = reverse + to_string(remainder); 
    divisor /= 10;
    }
 reverse = reverse + to_string(divisor);   
 int reversed = stoi(reverse);
 cout << "The reverse is " << reversed;
}