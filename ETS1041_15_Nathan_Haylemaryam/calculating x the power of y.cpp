findind x the power of y by inputing x and y
#include <iostream>
#include <cmath> // 

using namespace std;

int main() {
    // Input
    double x, y;
    
    cout << "Enter the base (x): ";
    cin >> x;

    cout << "Enter the exponent (y): ";
    cin >> y;

    // Calculate x^y
    double result = pow(x, y);

    // Output
    cout << x << " raised to the power of " << y << " is: " << result << endl;

    return 0;
}
