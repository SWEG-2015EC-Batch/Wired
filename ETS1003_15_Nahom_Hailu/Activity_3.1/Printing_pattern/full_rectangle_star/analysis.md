# 1,Problem Description
Program to  rectangle using star
# 2,Problem analysis
## Input 
row, colomn
## process
Printing row using a star</br>
Repeat for colomn with increaing number 
## Output
number rectangle with with certain row and colomn with star
# 3,Alogrithm
## pseudocode
step 1: Start </br>
step 2: Read row, colomn </br>
step 3: compute i=1, j=1 </br>
step 4.1: if row >= i then </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;step 4.2if colomn >= j then </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp; print "*  " </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp; j=j+1 </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp; goto step 4.2</br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp; end if </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp; j=1 </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp; print (to)new line </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp; i=i+1 </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp; goto step 4.2 </br>
&emsp;&emsp;&emsp; endif</br>
step 5: end
## Flowchart
<img src="Flowcharts.jpeg"> </br>
# 4, Program design
### 4.1 variable declaration
int row,colomn, i(1),j(1);
### 4.2 Input Operation
cout << "enter row: "; </br>
cin >> row; </br>
cout << "enter colomn: "; </br>
cin >> colomn; </br>
### 4.3 Process
##### looping the rows 
while(row>=i){
##### looping to draw one full row
while(colomn>=j){
##### printing a star  
cout<<"*  "; </br>
j++; </br>
    } </br>
j=1; </br>
cout<<endl; </br>
i++; </br>
} </br>
### 4.3 Output operation
cout<<"*  "; </br>
cout<<endl;
