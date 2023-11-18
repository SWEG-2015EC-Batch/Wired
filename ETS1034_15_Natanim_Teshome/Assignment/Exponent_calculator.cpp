
//program that calculate x the power of y
#include <iostream>
#include <cmath> // library to do the math
using namespace std;

int main()
{
    // declaring variable
  int x,y;
  int result;
//promote user to enter value X
  cout << "please enter the value of X ";
  cin >> x;
//promote user to enter value Y
  cout << "please enter the value of Y ";
  cin >> y;

  result = pow(x, y);
  //print result
  cout << "The result of X^Y is: " << result;

  return 0;
}
   
    
