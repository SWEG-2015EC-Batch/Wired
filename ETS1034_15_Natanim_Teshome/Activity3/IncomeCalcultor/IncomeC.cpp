#include<iostream>
using namespace std;

int main() {
    double gross_salary, worked_hours, over_time_bonus_rate, income_tax_rate = 0, bonus_payment = 0;

    cout << "Enter worked hours: ";
    cin >> worked_hours;

    if (worked_hours > 40) {
        cout << "Enter the over-time bonus rate per hour: ";
        cin >> over_time_bonus_rate;
        // Calculate bonus payment
        bonus_payment = (worked_hours - 40) * over_time_bonus_rate;
    }

    cout << "Enter your gross salary: ";
    cin >> gross_salary;
    
    double pension = gross_salary * 0.07;

    if (gross_salary <= 200) {
        income_tax_rate = 0;
    } else if (gross_salary <= 600) {
        income_tax_rate = 0.10;
    } else if (gross_salary <= 1200) {
        income_tax_rate = 0.15;
    } else if (gross_salary <= 2000) {
        income_tax_rate = 0.20;
    } else if (gross_salary <= 3500) {
        income_tax_rate = 0.25;
    } else if (gross_salary > 3500) {
        income_tax_rate = 0.30;
    }

    // Calculate income tax
    double income_tax = gross_salary * income_tax_rate + bonus_payment * income_tax_rate;

    // Calculate net pay
    double net_pay = (gross_salary - pension - income_tax) + bonus_payment;

    cout << "Your net pay or salary is: " << net_pay << endl;

    return 0;
}

