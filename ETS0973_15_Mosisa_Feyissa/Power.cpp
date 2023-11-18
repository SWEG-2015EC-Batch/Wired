// This program calcutaes the value for exponenet x^y
#include<iostream>
#include <cmath>         // for power function
using namespace std;
int main() {
    double x, y;      // Variables to store the base (x) and exponent (y)
    
    cout << "Enter the base (x): ";
    cin >> x;
    cout << "Enter the exponent (y): ";
    cin >> y;
    double result = pow(x, y); // Calculating the x^y using the power function from the cmath library
    cout << "Result of " << x << "^" << y << " is: " << result;

    return 0;
}