# 1 Problem description
A program that calculate the net pay of a employee 
# 2 Problem analysis
# input 
 gross salary,
 
 worked hours, and
 
 
 
 over-time bonus rate/hour
 
 # Operation:
 
  Calculate pension, income tax

  pension = gross salary * 7/100

  income tax = gross salary * tax rate
 
 Check if the employee worked hours
 
 exceed 40 hrs.

 Compute the bonus payment [optional]
 
over worked hours * bonus rate

Compute Net-Pay of an employee

 net Salary = (gross Salary – pension –income tax) + Overtime payment
 # output
  net pay of the employee
  # Pseudocdoe
  1 start
  
  2 promt the user to enter gross salery, worked hour, over time bouuns rate
  
  3 if worked hour is >40 find the over time worked hour=(worked hour-40) else consider the over time worked hour as 0

  4 if gross salery is up to 200 birr income tax rate=0% 
  
   if gross salery 200 to 600 birr income tax rete = 10%
    
   if gross salery 600 to 1200 birr income tax rate= 15%
    
   if gross salery 1200 to 2000 birr inc0me tax rate= 20%
    
   if gross salery 2000 to 3500 birr income  tax rate = 25%

    
   if gross salery is above 3500 income tax rate rate = 35%
   
  5 calculate  Calculate pension, income tax

  6 pension = gross salary * 7/100

 7  income tax = gross salary * tax rate 
  
  8 Compute the bonus payment [optional]
 
9  over worked hours * bonus rate

 10 Compute Net-Pay of an employee
 
11 print the net pay of the employee

12 stop
  
  
