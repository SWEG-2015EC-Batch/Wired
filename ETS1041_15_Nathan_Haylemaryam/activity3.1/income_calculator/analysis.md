
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
  step 1: start

  step 2: promt the user to enter gross salery, worked hour, over time bouns rate
  
  step 3: if worked hour is >40 </br> over time worked hour=(worked hour-40) </br>else the over time worked hour as 0

  if gross salery is up to 200 birr then  income tax rate=0% 
  
  &emsp;&emsp;&emsp;&emsp;if gross salery 200 to 600 birr then income tax rete = 10%
    
  &emsp;&emsp;&emsp;&emsp;&emsp;&emsp; if gross salery 600 to 1200 birr then income tax rate= 15%
    
 &emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;  if gross salery 1200 to 2000 birr then income tax rate= 20%
    
 &emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;  if gross salery 2000 to 3500 birr then income  tax rate = 25%
    
  &emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;if gross salery is above 3500 then income tax rate rate = 35% </br> endif
   
 step 4:  calculate  Calculate pension, income tax

 step 5:   pension = gross salary * 7/100

 step 6:  income tax = gross salary * tax rate 
  
 step 7:  Compute bonus payment = worked hour * over time bouns rate

step 8: Compute Net-Pay = grosssalary - pension -income tax + bonus payment 
 
step 9: print the net pay of the employee

step 10: stop
  
  
