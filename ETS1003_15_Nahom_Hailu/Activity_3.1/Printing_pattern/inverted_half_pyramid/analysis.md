# 1,Problem Description
Program to to construct inverted half triangle(pyramid)
# 2,Problem analysis
## Input 
side
## process
Printing row using a star</br>
Repeat for each colomn 
## Output
triangle for inverted half pyramid
# 3,Algorithm
## 3.1 Pseudocode
step 1: Start </br>
step 2: read side </br>
step 3: i=1, j=side ,k=1 </br>
step 4.1: if side >= i then </br>
&emsp;&emsp;&emsp;&emsp;step 4.2: k=1 </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp; step 4.3: if j>=k then </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp; print "*  " </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp; k=k+1 </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp; goto step 4.3</br>
&emsp;&emsp;&emsp;&emsp; end if </br>
&emsp;&emsp;&emsp;&emsp; print to new line </br>
&emsp;&emsp;&emsp;&emsp;j=j-1 </br>
&emsp;&emsp; end if </br>
step 5: stop
# 4,Program Design
## 4.1 Variable declaration and intialization
int side, i(1),k(1) </br>
int j=side;
## 4.2 Input Operation
cout << "Enter the side "; </br>
cin >> side;
## 4.3 Process
###### looping for row
for(;side>= i;i++){
###### loop for full colomn
 for(k=1;j>=k;k++){ </br>
        cout << "*  ";  </br>      
    }</br>
###### decrease the row
  cout<< endl; </br>   
  j--;
## 4.4 Output operation
cout << "*  ";   
