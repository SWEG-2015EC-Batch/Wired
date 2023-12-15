# 1,Problem Description
Program to to print out the numbers 10 through 49
# 2,Problem analysis
## Input 
(Already assigned)
## process
Printing row with with consdutively </br>
Repeat for four colomn with increaing number 
## Output
number rectangle with increasing order
# 3,Alogrithm
## 3.1 ,Pseudocode
step 1: Start </br>
step 2: compute row=1 </br> colomn = 0 </br>
step 3.1: if row <=4 then </br>
&emsp;&emsp;&emsp;&emsp;&emsp; step 3.2 if colomn < 0 then </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;if row <= 9 then </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;print row*10 + colomn </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;row = row + 1</br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;goto step 3.2 </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;end if </br>
&emsp;&emsp;&emsp;&emsp;&emsp; Print (new line)</br>
&emsp;&emsp;&emsp;&emsp;&emsp; row = row + 1 </br> &emsp;&emsp;&emsp;&emsp;&emsp;colomn = 1 </br>
&emsp;&emsp;&emsp;&emsp;&emsp; goto step 3.1 </br>
&emsp;&emsp;&emsp;&emsp;&emsp; Endif </br>
step 5: end
# 4, Program design
## 4.1 Variable declaration
i for row and j for colomn </br>
int i , j=0; </br>
## 4.2 Operation
##### Looping the row
for(i=1;i<=4;i++){ </br>
##### Looping the colomn 
while (j <= 9) </br>
    {</br>
##### Printing the number
cout << (i*10)+j <<" ";</br>
        j++;</br>
    }</br>
    cout <<endl;</br>
    j=0;</br>
} </br>
## output operation
cout << (i*10)+j <<" ";</br>



