// printing the number of miles an automoblie can be driven with out refuling 
#include<iostream>
using namespace std;
int main () { 
    float capacityInGallon, milesPerLiter, totaldrive;
    cout<< "enter capacity in gallon:";
    cin>> capacityInGallon;
    cout<< "enter miles per gallon";
    cin>>  milesPerLiter;
    float totadrive=capacityInGallon*milesPerLiter;
    cout<< "the totaldrive is:"<<totadrive<<endl;
     return 0;
    }
