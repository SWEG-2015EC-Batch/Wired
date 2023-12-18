# 1 Problem Description 
Program that performs simple calculator that perform basic arithmetic operation
## 1.1 Input(s):
  -	Numbers: n1 & n2 
  -	Operators
## 1.2 Output(s): 
  -	Result
## 1.3 Operation(s):
  -	Reading two numbers and the operator
  -	Calculating Result:
     	Result=n1 + n2 (If user choose sum)</br>
    	Result=n1 - n2 (If user choose subtraction)</br>
    	Result=n1 * n2 (If user choose multiplication)</br>
    	Result=n1 / n2 (If user choose division)</br>
  -	Accept numbers (1-9) If the user want to continue 
    	If the user type 0 : exit the program</br>

# 2 Pseudocode
step-1: Start</br>
step-2: Read operator </br>
step-3: Read num1</br>
step-4: Read num2</br>
step-5: If operator = + then</br>
             Result = num1 + num2</br>
             print Result</br>
             end if</br>
           else if operator = - then</br>
             Result = num1 - num2</br>
             print Result</br>
             end if</br>
           else if operator = * then</br>
                Result = num1 * num2</br>
             print Result</br>
             end if</br>
             else if operator = / then</br>
                  if num2<--0 then</br>
                     print "Undefined!  since a number can't be divided by 0"</br>
                     print "Enter a valid numbers: "</br>
                  Read num2 then</br>
             Result = num1 / num2</br>
             print Result</br>
             end if</br>
           else goto step 3</br>
step 6: read operator</br>
step 7: print "Enter: - Any number(1-9) to continue or - \"0\" to stop: "</br>
step 8: read operator</br>
step 8: if operator != 0 then</br>
     goto step 3</br>
   End if</br>
step 7: else print Result</br>
step 8: end</br>

