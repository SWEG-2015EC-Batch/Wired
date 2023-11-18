# 1,Problem Description
Write a program to read an employee name, working hours, bonus rate per hour and base salary and print the empolyee gross-salary, net salary and bonus payment.
# 2,Problem analysis
### Input
employee name </br>
working hours</br> 
bonus rate per hour </br>
base salary
### Output
gross-salary</br>
net salary</br>
bonus payment
### Process
bonus payment =  working hour * bonus rate per hour
gross-salary = base salary + bonus payment
pension = gross-salary * PENSION RATE
Tax = gross-salary * TAX rate
net salary = gross-salary - (pension + Tax)
# 3 algorith
## 3.1 in psuedocode
step 1 : start  </br>
step 2 : read employee name,working hours,bonus rate per hour,base salary  </br>
step 3 : if work hours > 40, then bonus payment = (work hours - 40 ) * bonus rate else zero </br>
step 4 : compute bonus payment =  working hour * bonus rate per hour </br>
step 5 : gross-salary = base salary + bonus payment </br>
step 6 : pension = gross-salary * PENSION RATE </br>
step 7 : Tax = gross-salary * TAX rate </br>
step 8 : net salary = gross-salary - (pension + Tax) </br>
step 9 : print bonus payment, net salary </br>
step 10 : stop</br>
```mermaid
graph LR;
id1([Start])-->id2[/read employee name,working hours,bonus rate per hour,base salary/]
id2--> id3{is work hours > 40?}
id3--> id4[ bonus payment= work hours - 40 *bonus rate]
id3--> id5[bonus payment = 0]
id4--> id6[gross-salary = base salary + bonus payment]
id5--> id6[gross-salary = base salary + bonus payment]
id6--> id7[ pension = gross-salary * PENSION RATE]
id7--> id8[Tax = gross-salary * TAX rate]
id8--> id9[net salary = gross-salary - pension - Tax]
id9--> id10[/print bonus payment,gross-salary,net salary/]
id10--> id11([Stop])
```
#4 Program design
##### 4.1 Variable declaration and intialization
string employee name float working hours,bonus rate per hour,base salary,overtime,gross_salary,net_salary
##### 4.2 constant declaration and intialization
#define PENSIONRATE 0.05</br>
#define TAX 0.15
##### 4.3 Reading the input data
cout << "Enter emplyee name ";
cin >> employeeName;</br>
cout << "enter weekly working hour "; </br>
cin >> workHour;</br>
cout << "enter weekly bonus rate per hour "; </br>
cin >> bonusRate;</br>
cout << "enter baseSalary ";</br>
##### 4.4 Main operation 
1,checking over time </br>
if (workHour > 40) { </br>
    overtime = (workHour-40)*bonusRate;</br>
    cout << "The bonus payment is " << overtime << endl;</br>
}</br>
else{</br>
    overtime = 0;</br>
    cout << "The bonus payment is " << overtime << endl;</br>
}</br>
2,Operating main function </br>
cout << "The net salary is " << grossSalary-grossSalary*TAX -grossSalary*PENSIONRATE;
##### 4.5 printing on screen
cout << "The gross salary is "<< grossSalary<< endl;
cout << "The net salary is " << grossSalary-grossSalary*TAX -grossSalary*PENSIONRATE
;
