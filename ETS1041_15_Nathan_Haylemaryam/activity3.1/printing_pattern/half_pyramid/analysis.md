# 1,Problem Description
Program to to construct half triangle(pyramid)
# 2,Problem analysis
## Input 
side
## process
Printing row using a star</br>
Repeat for each colomn 
## Output
triangle for half pyramid 
# 3 Alogoritm
## 3.1 Psedocode
step 1: Start </br>
step 2: read side </br>
step 3: i=1, j=1 ,k=1 </br>
step 4.1 : if side >= i then </br>
&emsp;&emsp;&emsp;&emsp;step 4.2 k=1 </br>
&emsp;&emsp;&emsp;&emsp;step 4.3 if j>=k </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;print "*  " </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp; goto step 4.3 </br>
&emsp;&emsp;&emsp;&emsp;end if </br>
&emsp;&emsp;print to new </br>
&emsp;&emsp; j=j+1 </br>
&emsp;&emsp; i=i+1 </br>
&emsp;&emsp;goto step 4.1 </br>
&emsp;&emsp; endif </br>
step 5: end
# program design
## 1,Variable declaration
int side, i(1),j(1),k(1);
## 2,Input Operation
cout << "Enter the side "; </br>
cin >> side;
## 3, Process
###### looping for row
for(;side>= i;i++){
###### looping for colomn
 for(k=1;j>=k;k++){ </br>
        cout << "*  "; </br>
        }</br>
    cout<< endl;</br>
###### increment of size of colomn
 j++;  </br>
}
## 4,Output Operation
cout << "*  ";





