# 1,Problem Description
Program to to construct hollow full triangle(pyramid)
# 2,Problem analysis
## Input 
side
## process
Printing row using a star</br>
Repeat for each colomn 
## Output
triangle for hollow full pyramid 
# 3, Algorithm 
## 3.1 Pseudocode
step 1: start </br>
step 2: read side </br>
step 3: compute i=1 , j=1, k=1,space=side, spaceCheker=1 </br>
step 4.1: if side >= i then </br>
&emsp;&emsp;&emsp;&emsp;step 4.2 if space > spaceChecker then </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;print "   " </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;spaceChecker = spaceChecker + 1 </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;goto step 4.2 </br>
&emsp;&emsp;&emsp;&emsp; End if </br>
&emsp;&emsp;space = space- 1 </br>
&emsp;&emsp;spaceChecker = 1 </br>
&emsp;&emsp;print "*  " </br>
&emsp;&emsp;k=k+1 </br>
&emsp;&emsp;&emsp;&emsp;step 4.3 if j>k then </br>
&emsp;&emsp;&emsp;&emsp; print "   " </br>
&emsp;&emsp;&emsp;&emsp;k = k+1 </br>
&emsp;&emsp;&emsp;&emsp; goto step 4.3 </br>
&emsp;&emsp;&emsp;&emsp;End if </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;if j>0 then </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;print "   " </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;end if </br>
&emsp;&emsp;&emsp;&emsp;k=1 </br>
&emsp;&emsp;&emsp;&emsp;print (to new line) </br>
&emsp;&emsp;&emsp;&emsp;j=j+1 </br>
&emsp;&emsp;&emsp;&emsp;i=i+1 </br>
&emsp;&emsp;goto step 4.1 </br>
End if
step 5.1 : if space > spaceChecker then </br> 
&emsp;&emsp;&emsp;&emsp;print "   " </br>
&emsp;&emsp;&emsp;&emsp;spacechecker = spacechecker + 1 </br>
&emsp;&emsp;&emsp;&emsp;goto step 5.1 </br>
&emsp;&emsp;&emsp;&emsp;end if</br>
step5.2 if side >= k then </br>
&emsp;&emsp;&emsp;&emsp;print "*   "</br>
&emsp;&emsp;&emsp;&emsp;k=k+1 </br>
&emsp;&emsp;&emsp;&emsp;goto step 5.2</br>
&emsp;&emsp;&emsp;&emsp;End if</br>
step 6: End
# 4,Program Design
# 4.1 Variable design
int side,i(1),j(1),k(1),space = side, spacecheker=1;
# 4.2 Input Operation
cout<< "This program produce full pyramid.\nEnter the side: ";</br>
cin >> side;
# 4.3 Process
###### For row looping
  while(side > i){
###### loop for white space
while(space>=spacecheker){</br>
cout<< "  ";// two unit of space</br>
spacecheker++;</br>
}</br>
space--;</br>
spacecheker=1;
###### for first loop
cout<<"*   "</br>
k++;
###### for middle rows
while(j>k){ </br>
cout<<"    ";</br>
k++;</br>
}</br>
if(j>1){</br>
cout<<"*   ";</br>
}</br>
k=1;
###### New line 
cout<<endl;
###### increament in size of row
j++;
###### for next row        
i++;
