#include<iostream>
using namespace std;
#define PENSIONRATE 0.05
#define TAX 0.15
int main() {
string employeeName;
int workHour;
float bonusRate,baseSalary,overtime;
cout << "Enter emplyee name ";
cin >> employeeName;
cout << "enter weekly working hour "; 
cin >> workHour;
cout << "enter weekly bonus rate per hour "; 
cin >> bonusRate;
cout << "enter baseSalary ";
cin >> baseSalary;
if (workHour > 40) {
    overtime = (workHour-40)*bonusRate;
    cout << "The bonus payment is " << overtime << endl;
}
else{
    overtime = 0;
    cout << "The bonus payment is " << overtime << endl;
}
float grossSalary = baseSalary + overtime;
cout << "The gross salary is "<< grossSalary<< endl;
cout << "The net salary is " << grossSalary-grossSalary*TAX -grossSalary*PENSIONRATE ;
}
