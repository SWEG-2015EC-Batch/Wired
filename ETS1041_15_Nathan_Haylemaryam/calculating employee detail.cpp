// a program that akes input for the employee details, performs the calculations, and then outputs the employee name, gross salary, bonus payment, and net salary
#include<iostream>
using namespace std;
int main() {
    string employee_name;
    double weekly_working_hour,bonus_rate_per_hour,base_salery,gross_salery,bonus_payment,pension_dedeuction,tax_deduction,net_salery;
    cout<<"enter employee_name :";
    cin>> employee_name;
    cout<<"enter the employees weekly_working_hour: ";
    cin>>weekly_working_hour;
    cout<<"enter the employees bonus_rate_per_hour: ";
    cin>>bonus_rate_per_hour;
    cout<<"enter the employees base_salery: ";
    cin>>base_salery;
    // calculating gross_salery
    gross_salery=base_salery+(weekly_working_hour*bonus_rate_per_hour);
    // clculating bouns_payment
    bonus_payment=weekly_working_hour*bonus_rate_per_hour;
    //calculating dedeuction both tax and pension
    pension_dedeuction=(.05*gross_salery);
    tax_deduction=(.15*gross_salery);
    // calcuating net_salery
    net_salery=gross_salery-(pension_dedeuction+tax_deduction);
    cout << "\nEmployee Name: " << employee_name << endl;
    cout << "Gross Salery: $" << gross_salery << endl;
    cout << "Bonus Payment: $" << bonus_payment << endl;
    cout << "Net Salery: $" << net_salery << endl;




    


    
    return 0;
}
