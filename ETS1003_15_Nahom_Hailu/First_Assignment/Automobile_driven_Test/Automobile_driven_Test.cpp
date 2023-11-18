 // Program to caluclate maximum number of mile car can go //
#include <iostream>
using namespace std;
int main() {
    float capacityOfTank(0); // capacity of fuel to hold in tank in gallon//
    float milePerGallon(0); // amount of car can go in mile per gallon//
    cout << "Enter the capacity in gallon the capacity of fuel tank ";
    cin >> capacityOfTank;
    cout << " Enter the miles the car could be driven per gallon ";
    cin >> milePerGallon; 
    float  totalDrive = capacityOfTank * milePerGallon;
    cout << "Therefore the car can go " << totalDrive << " miles.";
    return 0;
}
