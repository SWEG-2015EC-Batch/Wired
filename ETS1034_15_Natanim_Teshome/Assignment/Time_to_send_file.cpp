//program that calculates the time taken to send a file in bytes
#include <iostream>
using namespace std;
int main()
{
const int transmissionRate = 960;
// declering variable for file size
   int fs;
// declering variable for time in seconds
    int tis;
  cout << "please enter the file size in bytes " ;
  cin >> fs;
tis= fs / transmissionRate;
cout << "the time needed to send the file " << tis<< "sec" << endl;
return 0;
}
