# Problem Description
Write c++ program to read an employee name, weekly working hours, bonus rate per hour and base salary and print the gross-salary, net salary and bonus payment
# Problem analysis
## Input
employee name,
working hours
bonus rate per hour,
base salary
## Output
gross-salary,
net salary,
bonus payment
## Process/operation
pension_deduction = 0.05 * gross_salary

tax_deduction = 0.15 * gross_salary

 net_salary = gross_salary - (pension_deduction + tax_deduction)

 bonus_payment = bonus_rate_per_hour * weekly_working_hours

Display gross salary, net salary, and bonus payment
# Alogrithm in pseudocode

step 1: start

step 2: read the Employee Name,weekly working hours,bonus rate per hour,base salary

step 3: gross_salary = (hours_worked*base_salary) + (hours_worked*bonus_rate)

step 4: bonusPayment <-- bonusRatePerHour * weeklyWorkingHours

step 5: grossSalary <-- totalWeeklySalary * 4

step 6: pensionDeduction <-- grossSalary * 0.05

step 7: taxDeduction <-- grossSalary * 0.15

step 8: netSalary <-- grossSalary - (pensionDeduction + taxDeduction)

step 9: print (Employee Name,Gross Salary,Net Salary,Bonus Payment).

step 10: stop
# Design the program
## Variable declaration and initialization
 float hoursworked, bonusrate, basesalary
 ## Reading input
 cout<<"Enter employee name,weekly working hours,bonus rate per hour,base salary";
 cin>>name>>hours_worked>>bonus_rate>>base_salary
 ## Perform operation
 pension_deduction = 0.05 * gross_salary
 
 gross_salary = (hours_worked*base_salary) + (hours_worked*bonus_rate)

tax_deduction = 0.15 * gross_salary

 net_salary = gross_salary - (pension_deduction + tax_deduction)

 bonus_payment = bonus_rate_per_hour * weekly_working_hours
 ## Print result
   cout << "Employee" << name<< endl;
    cout << "Gross Salary" << gross_salary << endl;
    cout << "Net Salary" << net_salary << endl;
    cout << "Bonus Payment" << bonus_payment << endl;
