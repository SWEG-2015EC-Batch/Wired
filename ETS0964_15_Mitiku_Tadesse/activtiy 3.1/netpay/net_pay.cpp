#include <iostream>
using namespace std;

int main(){
    double gross_salary, pension_Rate, tax_Rate, over_time_Rate, worked_Hours;
    double pension_Deduction, tax_Deduction, over_time_Hours, bonus_Payment, net_Salary;

    cout << "Enter the gross salary: ";
    cin >> gross_salary;
    cout << "Enter the pension rate (%): ";
    cin >> pension_Rate;
    cout << "Enter the tax rate (%): ";
    cin >> tax_Rate;
    cout << "Enter the worked hours: ";
    cin >> worked_Hours;


    pension_Deduction = gross_salary * (pension_Rate / 100);

    if (gross_salary <= 200) {
        tax_Deduction = 0;
    } else if (gross_salary <= 600) {
        tax_Deduction = gross_salary * (10 / 100);
    } else if (gross_salary <= 1200) {
        tax_Deduction = gross_salary * (15 / 100);
    } else if (gross_salary<=2000){
        
        tax_Deduction = gross_salary * (20 / 100);
    }
      else if(gross_salary<=3500){
        tax_Deduction=gross_salary * (25/100)  
       }else{
            tax_Deduction=gross_salary*(30/100)
                }


    if (worked_Hours > 40) {
        cout << "Enter the overtime bonus rate per hour: ";
        cin >> over_time_Rate;
        over_time_Hours = worked_Hours - 40;
        bonus_Payment = over_time_Hours * over_time_Rate;
    } else {
        bonus_Payment = 0;
    }
    net_Salary = (gross_salary - pension_Deduction - tax_Deduction) + bonus_Payment;

    
    cout << "Net Salary: " << net_Salary << " birr" << endl;

return 0;
}