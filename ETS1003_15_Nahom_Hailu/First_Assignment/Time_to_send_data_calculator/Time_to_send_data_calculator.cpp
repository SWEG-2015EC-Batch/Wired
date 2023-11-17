//program to compute time to send data//
#include <iostream>
using namespace std;
#define sendRate 960 // 1 chacter is 1 byte and it can run 960 byte per second
int main() {
float time, dataValue; // datavalue in byte
cout << "enter the amount of data in mb  ";
cin >> dataValue;
dataValue = dataValue * 1048576; // to change mb to byte //
time = dataValue / sendRate;
cout << "The time requrired is approximately " << int((time/(24*3600))+0.5)<< " days"; // int(float) to change to int and add 0.5 to approximate it.//
}   
