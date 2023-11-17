//c++ program that calculates the time taken to send a file in bytes
#include <iostream>
using namespace std;
int main()
{
const int transmissionRate = 960;
   int fileSizeInBytes;
    int timeInSec;
  cout << "Enter the file size in bytes";
  cin >> fileSizeInBytes;
timeInSec= fileSizeInBytes / transmissionRate;
cout << "time needed to send the file " << timeInSec<< "sec" << endl;
return 0;
}
