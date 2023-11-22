// Ths program calculates the Net salary, Gross Salary and Rate payment
#include<iostream>
using namespace std;
int main() {
    string employeename;
    double WWH,BRPH,BS,GS;
    const double PR=0.05;
    const double TR=0.15;
    cout<<"Please, enter an employee name ";
    cin>>employeename;
    cout<<"Please, enter WWH ";
    cin>>WWH;
    cout<<"Please, enter BRPH ";
    cin>>BRPH;
    cout<<"Please, enter BS ";
    cin>>BS;
    cout<<employeename;
    cout<<"The GS"<<GS;
    double BP=WWH*BRPH;
    cout<<"The BP is "<<BP;
    double PD=GS*PR;
    cout<<"The PD is "<<PD;
    double TD=GS*TR;
    cout<<"The TD is "<<TD;
    double NS=GS-PD;
    cout<<"The NS is "<<NS;
    
    return 0;
}