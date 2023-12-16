# 1,Problem Description
Program to to construct inverted hollow half triangle(pyramid)
# 2,Problem analysis
## Input 
side
## process
Reading the side
Printing row using a star with its pattern</br>
triangle with open middle structure </br>
Repeat for each colomn 
## Output
triangle for hollow half pyramid 
# 3.Algorithm
## 3.1 Pseudocode
step 1: Start </br>
step 2: read side </br>
step 3: i=1, j=side ,k=1 </br>
step 4.1: if side >= i then </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;if i = 1 then </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;step 4.2 k=1 </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;step 4.3 if j>= k then </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;print "*  " </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;k=k+1 </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;goto step 4.3 </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;end if </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;print (new line) </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;j=j-1 </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp; i=i+1 </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp; goto step 4.1 </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp; end if </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp; step 4.4 k=1 </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp; step 4.5 if j>=k then </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;if k=1 or k=j then  </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;print "*  " </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;k=k+1 </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;goto step 4.5 </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;end if </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;print "   " </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp; k=k+1 </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;goto step 4.5 </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;endif </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;j=j-1 </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;print (to new line) </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp; i=i+1 </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;goto step 4.1 </br>
step 5: end
# 4,program design
## 4.1 Varable declaration and intialization
int side, i(1),j,k(1); </br>
j=side;
## 4.2 Input Operation
cout << "Enter the side "; </br>
cin >> side;
## 4.3 Process
###### loop
while(side >= i){
##### loop for making first row 
if (i==1){</br>
for(k=1;j>=k;){</br>
    cout << "*  ";</br>
    k++;</br>
    }</br>
cout<<endl;</br>
j--;</br>
i++;</br>
continue;</br>
}
##### loop for other rows
for(k=1;j>=k;){
##### Conditional for first and last colomns
if(k==1 || k==j){</br>
cout <<"*  ";</br>
k++;</br>
continue;</br>
}</br>
cout << "   ";</br>
k++;</br>
}</br>
##### decrease size of the row
j--;</br>
cout<< endl;
##### increase a row number
i++; </br>
}

