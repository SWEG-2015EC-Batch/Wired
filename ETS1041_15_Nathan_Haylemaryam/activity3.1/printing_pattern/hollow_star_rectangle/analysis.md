# 1,Problem Description
Program to to construct hollow rectangle with stars
# 2,Problem analysis
## Input 
row, colomn
## process
Printing row using a star</br>
Repeat for colomn with increaing number 
## Output
number rectangle with with certain row and colomn with star with hollow structure
# 3 Alogoritm
## 3.1 Pseudocode
step 1: Start </br>
step 2: Read row, colomn </br>
step 3: compute i=1, j=1 </br>
step 4.1: if row >= i then </br>
&emsp;&emsp;&emsp;&emsp;&emsp;step 4.2 if i = 1 or i= row then </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;if colomn >= j then </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp; print "*  " </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp; j=j+1 </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp; Endif </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp; print new line </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp; j=1 </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp; i= i+1 </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp; goto step 4.1 </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp; endif </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp; step 4.3 else </br> &emsp;&emsp;&emsp;&emsp;&emsp;&emsp;if colomn >= j then </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;if j= 1 or j = colomn then </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp; print "*  " </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp; j=j+1 </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp; goto step 4.3 </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp; end if </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp; else print "   " </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp; j = j+1 </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;  end if </br>&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp; endif</br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp; print to new line </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp; j=1 </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp; i=i+1 </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp; goto step 4.1 </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp; end if </br>
step 5: stop 
# program design
## 1, variable declaration
int row , colomn , i(1), j(1); </br>
## 2, input Operation
cout << "enter row: "; </br>
cin >> row; </br>
cout << "enter colomn: ";</br>
cin >> colomn;
## 3,operation
##### looping for diffrent row
while(row>=i){
##### printing full stars for first and last row
if(i==1 || i == row){ </br>
###### loop for printinig each colomn </br>
while(colomn>=j){</br>
    cout<< "*  ";</br>
    j++;</br>
}</br>
 cout << endl; </br>
 j=1;</br>
 i++;</br>
continue;</br>
} 
##### printing other rows
while(colomn>=j){</br>
if(j == 1 || colomn == j){</br>
cout<< "*  ";</br>
j++;</br>
continue;  </br>
}</br>
cout << "   ";</br>
j++; </br>
}</br>
###### aligning the structure
cout<< endl;</br>
j=1;</br>
i++;</br>
## 4, output operation
cout<< "*  ";



