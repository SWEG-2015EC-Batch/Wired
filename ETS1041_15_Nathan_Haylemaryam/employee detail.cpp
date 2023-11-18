# 1, Problem Description
Write a program that takes input for employee details, performs calculations, and outputs the employee name, gross salary, bonus payment, and net salary.

# 2, Problem Analysis
## Input 
- Employee name
- Weekly working hours
- Bonus rate per hour
- Base salary

## Output
- Employee name
- Gross salary
- Bonus payment
- Net salary

## Process
1. Read employee details: name, weekly working hours, bonus rate per hour, and base salary.
2. Calculate gross salary: `gross_salary = base_salary + (weekly_working_hours * bonus_rate_per_hour)`.
3. Calculate bonus payment: `bonus_payment = weekly_working_hour * bonus_rate_per_hour`.
4. Calculate deductions:
   - Pension deduction: `pension_deduction = 0.05 * gross_salary`.
   - Tax deduction: `tax_deduction = 0.15 * gross_salary`.
5. Calculate net salary: `net_salary = gross_salary - (pension_deduction + tax_deduction)`.
6. Output employee name, gross salary, bonus payment, and net salary.

# 3, Algorithm Design 
## 3.1 In Pseudocode

## 3.2 In Flowchart
ALGORITHM(FLOWCHART)

```mermaid
flowchart LR;
id1([start])
id2[/Read employee details/]
id3[Gross Salary = Base Salary + (Weekly Working Hours * Bonus Rate per Hour)]
id4[Bonus Payment = Weekly Working Hours * Bonus Rate per Hour]
id5[Pension Deduction = 0.05 * Gross Salary]
id6[Tax Deduction = 0.15 * Gross Salary]
id7[Net Salary = Gross Salary - (Pension Deduction + Tax Deduction)]
id8[/Output Employee Details/]
id9([stop])
id1--> id2
id2--> id3
id3--> id4
id4--> id5
id5--> id6
id6--> id7
id7--> id8
id8--> id9
string employee_name;
double weekly_working_hour, bonus_rate_per_hour, base_salary, gross_salary, bonus_payment, pension_deduction, tax_deduction, net_salary;
cout << "Enter employee name: ";
cin >> employee_name;
cout << "Enter the employee's weekly working hours: ";
cin >> weekly_working_hour;
cout << "Enter the employee's bonus rate per hour: ";
cin >> bonus_rate_per_hour;
cout << "Enter the employee's base salary: ";
cin >> base_salary;
gross_salary = base_salary + (weekly_working_hour * bonus_rate_per_hour);
bonus_payment = weekly_working_hour * bonus_rate_per_hour;
pension_deduction = 0.05 * gross_salary;
tax_deduction = 0.15 * gross_salary;
net_salary = gross_salary - (pension_deduction + tax_deduction);
cout << "\nEmployee Name: " << employee_name << endl;
cout << "Gross Salary: $" << gross_salary << endl;
cout << "Bonus Payment: $" << bonus_payment << endl;
cout << "Net Salary: $" << net_salary << endl;
