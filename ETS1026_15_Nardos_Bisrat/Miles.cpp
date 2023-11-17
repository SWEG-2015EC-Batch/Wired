//c++ program that calculate the number of miles that an automobile can be driven without refueling
#include <iostream>
using namespace std;
int main()
{
  float fuelcapacity;
  float mpg;//mpg is mile per gallon
  cout << "Enter the capacity of the fuel tank in gallons";
  cin >> fuelcapacity;
  cout << "Enter mpg";
  cin >> mpg;
  float miles=fuelcapacity*mpg;
  cout << "You can go " << miles << " miles with full gallon";
  return 0;
}
