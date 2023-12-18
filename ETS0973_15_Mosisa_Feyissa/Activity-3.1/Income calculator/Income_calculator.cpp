//Write a C++ program to calculate the Net-Pay of an employee after deduction of pension (7%) and tax.
#include<iostream>
using namespace std;

int main(){
    float Net_pay, Pension, Gross_salary, Worked_hours,Tax_rate, Income_Tax,overTime_rate, overTime_Payment, overTime;

    cout<<"How much is your gross salary: $";
    cin>>Gross_salary;
    cout<<"Please enter worked hours: ";
    cin>>Worked_hours;
    
    //Calculating the pension
    Pension = Gross_salary*0.07;

    //Calculating the new Gross salary if the employee have worked more than 40 hours 
    if(Worked_hours > 40){
        cout<< "Please enter the over time bonus rate per hour: $";
        cin>> overTime_rate;
        overTime = Worked_hours - 40;
        overTime_Payment = overTime*overTime_rate;
        Gross_salary = overTime_Payment + Gross_salary;
    }
       //Computing the Given gross salary to calculate the Income tax rate
        if(Gross_salary>=3500){
            Tax_rate=0.3;
        }else if(Gross_salary>=2000){
            Tax_rate=0.25;
        }else if(Gross_salary>=1200){
            Tax_rate=0.20;
        }else if(Gross_salary>=600){
            Tax_rate=0.15;
        }else if(Gross_salary>=200){
            Tax_rate=0.10;
        }else{
            Tax_rate=0;
        }
        //Calculating the income tax rate
        Income_Tax=Gross_salary*Tax_rate;
        //Claculating the net pay
        Net_pay=Gross_salary-Pension-Income_Tax;

    cout<<"Your Net Salary is:$ "<<Net_pay;

    return 0;
}