//c++ program that calculate x the power of y
#include <iostream>
#include <cmath>
#include <ctype.h>

using namespace std;

int main()
{
  int x,y;
  int result;

  cout << "Enter the value of X: ";
  cin >> x;

  cout << "Enter the value of Y: ";
  cin >> y;

  result = pow(x, y);

  cout << "The result of X^Y is: " << result;

  return 0;
}

