# 1,Problem Description
Program to to construct full inverted triangle(pyramid)
# 2,Problem analysis
## Input 
side
## process
Printing row using a star</br>
Repeat for each colomn 
## Output
triangle for inverted full pyramid 
# 3, Algorithm 
## 3.1 Pseudocode
step 1: start </br>
step 2: read side </br>
step 3: compute i=1 , j=side, k=1,space=0, spaceCheker=1 </br>
step 4.1: if side >= i then </br>
&emsp;&emsp;&emsp;&emsp;&emsp;step 4.2 if space >= spaceChecker then </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;print "   " </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;spaceChecker = spaceChecker + 1 </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp; goto step 4.2 </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp; End if </br>
&emsp;&emsp;&emsp;&emsp;&emsp;space = space + 1 </br>
&emsp;&emsp;&emsp;&emsp;&emsp; spaceChecker = 1 </br>
&emsp;&emsp;&emsp;&emsp;step 4.3 if j>= k then </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp; print "*  " </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp; k=k+1 </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp; goto step 4.4 </br>
&emsp;&emsp;&emsp;&emsp;&emsp;endif </br>
&emsp;&emsp;&emsp;&emsp; k=1 </br>
&emsp;&emsp;&emsp;&emsp; print(to new line) </br>
&emsp;&emsp;&emsp;&emsp; j=j-1 </br>
&emsp;&emsp;&emsp;&emsp; i = i+1 </br>
&emsp;&emsp;&emsp;&emsp; goto step 4.1 </br>
end if </br>
step 5: end 
## FlowChart
<img src="Flowcharts.jpeg"></br>
# 4,Program Design
## 4.1 Variable declaration
int side,i(1),j(1),k(1),space(0), spacecheker=1; </br>
## 4.2 Input Operation
cout<< "This program produce inverted full pyramid.\nEnter the side: "; </br>
cin >> side;
## 4.3 Process
###### row loop
 while(side >= i){
###### loop for adding white space
while(space>=spacecheker){</br>
cout<< "  ";</br>
spacecheker++;</br>
 }</br>
space++;</br>
spacecheker=1;</br>
###### loop for row construction with star
while(j>=k){;</br>
            cout<<"*   ";</br>
            k++;</br>
        };</br>
###### decrease size of next row
j--;
##### for next row calling
i++;
