# 1,Problem Description
Program to to construct rectangle with 1 to 5 with different row
# 2,Problem analysis
## Input 
row, colomn
## process
Printing row of number increasing</br>
Repeat for other rows 
## Output
rectangle with 1 to 5 with different row
# 3, Algoritm 
## 3.1 Pseudocode
step 1: start </br>
step 2:read row,colomn </br>
step 3: compute i=1 , j=1 </br>
step 4.1:if i<=row then </br>
&emsp;&emsp;&emsp;&emsp;step 4.2 if j<= colomn then</br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;print j </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;j=j+1 </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;goto step 4.2 </br>
&emsp;&emsp;&emsp;&emsp;End if </br>
&emsp;&emsp; print (to new line) </br>
&emsp;&emsp;i=i+1 </br>
&emsp;&emsp;j=1 </br>
&emsp;&emsp;goto step 4.1 </br>
&emsp;&emsp;End if </br>
step 5 End
## flow Chart
<img src="Flowcharts.jpeg"> </br>
# 4,Program Design
## 4.1 Variable declaration
int row , colomn, i(1),j(1);
## 4.2 Input operation
    cout <<"enter the row:";</br>
    cin >> row;</br>
    cout << "enter the colomn";</br>
    cin >> colomn;
## 4.3 Main Operation
###### looping for loops
for(;i<=row;i++){
###### looping for making full colomn
for(j=1;j<=colomn;j++){</br>
cout << j <<"  ";</br>
}
###### Print to new line
cout << endl;
## 4.4 Output operation
cout << j <<"  ";

