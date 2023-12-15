# 1,Problem Description
Program to to construct full triangle(pyramid)
# 2,Problem analysis
## Input 
side
## process
Printing row using a star</br>
Repeat for each colomn 
## Output
triangle for full pyramid 
# 3, Algorithm 
## 3.1 Pseudocode
step 1: start </br>
step 2: read side </br>
step 3: compute i=1 , j=1, k=1,space=side, spaceCheker=1 </br>
step 4.1: if side >= i then </br>
&emsp;&emsp;&emsp;&emsp;step 4.2 if space >= spaceChecker then </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;print "   " </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;spacechecker = spacechecker + 1 </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp; goto step 4.2 </br>
&emsp;&emsp;&emsp;&emsp; end if </br>
&emsp;&emsp;&emsp;space= space -1 </br>
&emsp;&emsp;&emsp; spaceChecker = 1 </br>
&emsp;&emsp;&emsp;&emsp;&emsp;step 4.3 if j>=k then </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;print "*  " </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;k=k+1 </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;goto step 4.3 </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;end if </br>
&emsp;&emsp;&emsp;&emsp;&emsp; k=1 </br>
&emsp;&emsp;&emsp;&emsp;&emsp; print (to new line) </br>
&emsp;&emsp;&emsp;&emsp;&emsp;j=j+1 </br>
&emsp;&emsp;&emsp;&emsp;&emsp; i=i+1 </br>
&emsp;&emsp;&emsp;&emsp;&emsp; goto step 4.1 </br>
&emsp;&emsp;&emsp;end if </br>
step 5: end if </br>
# Program Design
## 1,Variable Declaration
int side,i(1),j(1),k(1),space , spacecheker=1;
## 2, Input operation
cout<< "This program produce full pyramid.\nEnter the side: "; </br>
cin >> side;
## 3,Process
###### loop for row adding 
while(side >= i){
###### loop for white space
while(space>=spacecheker){</br>
            cout<< "  ";// two unit of space</br>
            spacecheker++;</br>
        }</br>
        space--;</br>
        spacecheker=1;</br>
###### loop for star 
 while(j>=k){</br>
            cout<<"*   ";</br>
            k++;</br>
        }</br>
###### increasing size of row
j++;</br>
