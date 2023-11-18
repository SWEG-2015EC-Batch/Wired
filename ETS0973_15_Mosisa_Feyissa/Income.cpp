// Ths program calculates the Net salary, Gross Salary and Rate payment
// This program finds salary details of an employee
#include <iostream>
#include <string>
using namespace std;

const double tax= 0.15,
             pensionrate= 0.05;

int main() 
{
  string name;
  int weeklyHours;
  double bonusRate, baseSalary, grossSalary, netSalary, bonus, tax, pension;

  cout << "Enter employee name: ";
  cin >> name;

  cout << "Enter weekly working hours: ";
  cin >> weeklyHours;

  cout << "Enter bonus rate per hour: ";
  cin >> bonusRate;

  cout << "Enter base salary: ";
  cin >> baseSalary;

  bonus = weeklyHours * bonusRate;
  grossSalary = baseSalary + bonus;
  tax = tax * grossSalary;
  pension = pensionrate * grossSalary;
  netSalary = grossSalary - tax - pension;

  cout << "Employee: " << name << endl;
  cout << "Gross Salary: " << grossSalary << endl; 
  cout << "Net Salary: " << netSalary << endl;
  cout << "Bonus Payment: " << bonus << endl;

  return 0;

}