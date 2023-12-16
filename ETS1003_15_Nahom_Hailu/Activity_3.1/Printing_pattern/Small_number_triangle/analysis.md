# 1,Problem description
Program to draw a half triangle with small number in consqutive manner
# 2, Problem Analysis
## Input
side
## Process
Construct row with equal number of side </br>
Add size of row </br>
Print Each rows</br>
# 3,Alogoritm
## 3.1 Pseudocode
step 1: start </br>
step 2: read side</br>
step 3: compute j=1 ,i=1, k=1 </br>
step 4.1: if i<=side then </br>
&emsp;&emsp;&emsp;&emsp;step 4.2 if k<=j then </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp; print k </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp; goto step 4.2 </br>
&emsp;&emsp;&emsp;&emsp;End if </br> 
&emsp;&emsp;&emsp;j=j+1 </br>
&emsp;&emsp;&emsp;print (to new line) </br>
&emsp;&emsp;&emsp;i=i+1 </br>
&emsp;&emsp;&emsp;goto step 4.1 </br>
&emsp;End if </br>
step 5: End if 
## Flow charts
<img src="Flowcharts.jpeg"> </br>
# Program Design
## 4.1 Variable
int side,j(1); </br>
int i = 1;</br>
int k=1;
## 4.2, Input Operation
cout << "Enter side:"; </br>
cin >> side;
## 4.3 Operation
###### loop for rows
for(int i = 1; i<=side; i++){
###### loop for single row 
for(int k=1; k<=j; k++){</br>
cout << k << "  ";</br>
}
###### adding size of colomn 
j++;
###### new line
cout << endl;
## 4.4 Output Operation
cout << k << "  ";

