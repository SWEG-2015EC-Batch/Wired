# 1,Problem Description
program to make a simple basic calculator based on arthimetic input/output and arithmetic operator
# 2,Problem analysis
## Input
Number 1, Number 2, number of people
## process
###### loop the code until number of people reached </br>
if operator is addition </br>
number 1 = number 1 + number 2 </br>
if operator is subtraction </br>
number 1 = number 1 - number 2 </br> 
if operator is multiplication </br>
number 1 = number 1 * number 2 </br>
if operator is division</br>
number 1 = number 1 * number 2 </br>
###### zero operator for termination
## Output
number 1 = result
# 3, psuedocode
step 1: start </br>
step 2: read number 1 </br>
step 3: read operator </br>
step 4: If operator = + then </br>
&emsp;&emsp;&emsp;&emsp; read number 2 </br>
&emsp;&emsp;&emsp;&emsp; number 1 = number 1 + number 2 </br>
&emsp;&emsp;&emsp;&emsp; print number 1 </br>
&emsp;&emsp;&emsp;&emsp; end if </br>
&emsp;else if operator = - then </br>
&emsp;&emsp;&emsp;&emsp;read number 2 </br>
&emsp;&emsp;&emsp;&emsp; number 1 = number 1 - number 2</br>
&emsp;&emsp;&emsp;&emsp; print number 1 </br>
&emsp;&emsp;&emsp;&emsp; end if </br>
&emsp;else if operator = * then </br>
&emsp;&emsp;&emsp;&emsp;read number 2 </br>
&emsp;&emsp;&emsp;&emsp; number 1 = number 1 * number 2 </br>
&emsp;&emsp;&emsp;&emsp; print number 1 </br>
&emsp;&emsp;&emsp;&emsp; end if </br>
&emsp;else if operator = / then </br>
&emsp;&emsp;&emsp;&emsp;read number 2 </br>
&emsp;&emsp;&emsp;&emsp; number 1 = number 1 / number 2 </br>
&emsp;&emsp;&emsp;&emsp; print number 1 </br>
&emsp;&emsp;&emsp;&emsp; end if </br>
&emsp;else if operator = / then </br>
&emsp;&emsp;&emsp;&emsp;read number 2 </br>
&emsp;&emsp;&emsp;&emsp; number 1 = number 1 / number 2</br>
&emsp;&emsp;&emsp;&emsp; print number 1 </br>
&emsp;&emsp;&emsp;&emsp; end if </br>
&emsp;else goto step 3 </br>
step 4: read operator </br>
step 5: print "zero to terminate"</br>
step 6: if operator != 0 then </br>
&emsp;&emsp;&emsp;&emsp; goto step step </br>
&emsp;&emsp;&emsp;End if </br>
step 7: else print number 1 </br>
step 8: end 
## 4,Program design 
## 4.1 Variable declaration
float num1,num2; </br>
char operate;
## 4.2 Input operation
cout << "num 1: "; </br>
cin >> num1;</br>
cout << "operation: ";</br>
cin >> operate;
## 4.3 Operation
do accordling decision of operator </br>
do { </br>
switch (operate){ </br>
case '+': cout << "num 2: "; </br>
        cin >> num2; </br>
        num1 += num2;</br>
        cout <<  "result: "<<num1;</br>
        break;</br>
case '-':   cout << "num 2: ";</br>
        cin >> num2;</br>
        num1 -= num2;</br>
        cout <<  "result: "<<num1;</br>
        break;</br>
case '*': cout << "num 2: ";</br>
        cin >> num2;</br>
        num1 *= num2;</br>
        cout <<  "result: "<<num1;</br>
        break;</br>
case '/': cout << "num 2: ";</br>
        cin >> num2;</br>
        num1 /= num2;</br>
        cout <<  "result: "<<num1;</br>
        break;</br>
}
###### return to first loop if it is out of four operator
while(operate !='+' && operate !='-' && operate !='*' && operate !='/'){</br>
cout << "enter rigth operator :";</br>
cin >> operate;</br>
switch (operate){</br>
case '+': cout << "num 2: ";</br>
        cin >> num2;</br>
        num1 += num2;</br>
        cout <<  "result: "<<num1;</br>
        break;</br>
case '-':   cout << "num 2: ";</br>
        cin >> num2;</br>
        num1 -= num2;</br>
        cout <<  "result: "<<num1;</br>
        break;</br>
case '*': cout << "num 2: ";</br>
        cin >> num2;</br>
        num1 *= num2;</br>
        cout <<  "result: "<<num1;</br>
        break;</br>
case '/': cout << "num 2: ";</br>
        cin >> num2;</br>
        num1 /= num2;</br>
        cout <<  "result: "<<num1;</br>
        break;</br>
}</br>
}</br>
###### Zero to terminate process and get result
cout << "\n"<<"operator(zero to terminate): ";</br>
    cin >> operate;</br>
} while(operate!='0'); </br>
## 4.4 Output process
cout <<  "result: "<<num1;</br>
