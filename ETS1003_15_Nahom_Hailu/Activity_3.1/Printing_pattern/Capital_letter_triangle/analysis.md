# 1,Problem description
Program to draw letter triangle 
# 2, Problem Analysis
## Input 
side
## Process
draw a row using continous uppercase letter </br>
repeat for next row with one colomn added
## output 
triangle by using uppercase letter
# 3, Algorithm
## 3.1 Pseudocode
step 1:Start</br>
step 2:read side</br>
step 3: compute i=1,j=1,k=1</br>
step 4.1:if i<= side then </br>
&emsp;&emsp;&emsp;&emsp;step 4.2 if k<=j then </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;print A-1+k </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;k=k+1 </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;goto step 4.2 </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp; Endif </br>
&emsp;&emsp;&emsp;&emsp;j=j+1 </br>
&emsp;&emsp;&emsp;&emsp;print to new line </br>
&emsp;&emsp;&emsp;&emsp;i=i+1 </br>
&emsp;&emsp;&emsp;&emsp;goto step 4.1 </br>
&emsp;&emsp;end if</br>
step 5: Stop
# 4,Program design
## 4.1 varaible declaration
int side,j(1); </br>
int i=1; </br>
int k=1;
## 4.2 Input Operation
cout << "enter the side: ";</br>
cin>> side;
## 4.3 Operation
###### looping rows
for(int i=1;i<=side;i++){
###### loop for one row
for(int k=1;k<=j;k++){</br>
cout << char(64+k)<< "  ";</br>
}
###### adding a colomn
j++;
###### new line
 cout << endl;
## 4.4 Output Operation
cout << char(64+k)<< "  "; </br>
cout << endl;
