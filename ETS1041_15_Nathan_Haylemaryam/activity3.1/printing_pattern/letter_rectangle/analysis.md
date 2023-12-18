# 1,Problem Desscription
Program to draw rectangle with letter
# 2,Program Analysis
## Input
row , colomn
## process
make a row with letter starting from a to letter </br>
repeat it for row times 
## Output
rectangle with letter
# 3, Algorithm
## 3.1 Pseudocode
step 1:Start </br>
step 2:read row,colomn </br>
step 3:compute i=1 , j=1 </br>
step 4.1: if i <= row then </br>
&emsp;&emsp;&emsp;&emsp;step 4.2j=1 </br>
&emsp;&emsp;&emsp;&emsp;step 4.3 if j<=colomn then </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;print (a-1) + j </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;goto step 4.3 </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;End if </br>
&emsp;&emsp;&emsp;&emsp;print (to new line) </br>
&emsp;&emsp;&emsp;&emsp;i=i+1 </br>
&emsp;&emsp;&emsp;&emsp;goto step 4.1</br>
&emsp;&emsp;&emsp;&emsp;End if </br>
step 5: Stop
<img src="Flowcharts.jpeg" > </br>
# 4,Program Design
## 4.1 Varaible declaration
char letter;</br>
int row,colomn;</br>
int i=1;</br>
int j=1;
## 4.2 Input declaration
cout<< "Enter the raw: ";</br>
cin>> row;</br>
cout<< "Enter the colomn: ";</br>
cin>> colomn;
## 4.3 Operation
###### loop for next row
for(int i=1; i<=row;i++){
###### loop for one row
for(int j=1;j<=colomn;j++){
###### changing number to char
cout << char(96+j)<< "  ";</br>
        }
###### to new line
cout << endl;
## 4.4 Output Operation
cout << char(96+j)<< "  ";


