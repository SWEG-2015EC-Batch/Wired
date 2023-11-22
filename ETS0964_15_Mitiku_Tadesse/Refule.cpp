// This program ccalculates the miles that an automobile travels without refueling
#include<iostream>
using namespace std;
int main() {
                //FTC:Fuel tank capacity, MPG: Miles per gallon, MWOR: Miles with out refueling
    double FTC,MPG,MWOR;   
    cout<<"Please, enter your casr's fuel tank capacity ";
    cin>>FTC;
    cout<<"Plaese, enter how much miles can your car's travel per gallon ";
    cin>>MPG;
         //MWOR means Miles the car travels without refueling
    MWOR =FTC*MPG;
    cout<<"Your can car travel "<<MWOR<<" miles without refueling";
    return 0;
}