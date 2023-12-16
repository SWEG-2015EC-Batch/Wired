# 1,Problem description
Program to draw a inverted half triangle with small number in consqutive manner
# 2, Problem Analysis
## Input
side
## Process
Construct row with equal number of side </br>
Add size of row </br>
Print Each rows</br>
## Output
Inverted half triangle with increasing number
# 3,Alogoritm
## 3.1 Pseudocode
step 1:start </br>
step 2:read side</br>
step 3:compute j=1 ,i=1, k=1,space=side,spaceChecker=1 </br>
step 4.1:If i<= side then </br>
&emsp;&emsp;&emsp;&emsp;step 4.2 if space>=spaceChecker then </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;print "    " </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;spacechecker=spacechecker+1 </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;goto step 4.2 </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;End if </br>
&emsp;&emsp;&emsp;&emsp;spacechecker=1 </br>
&emsp;&emsp;&emsp;&emsp;space=space-1 </br>
&emsp;&emsp;&emsp;&emsp;k=j </br>
&emsp;&emsp;&emsp;&emsp;step 4.3 if j>0 then</br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;print j </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;j=j-1 </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;goto step 4.3 </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;End if</br>
&emsp;&emsp;j=k+1 </br>
&emsp;&emsp;print (to new line) </br>
&emsp;&emsp;goto step 4.1 </br>
&emsp;&emsp;End if </br>
step 5: End if 
# 4,Program Design
## 4.1 Varaible design 
int side,j(1),k(1),space,spacecheker(1);</br>
int i=1;
## 4.2 Input Operation
cout<<"Program to construct inverted half triangle\nside: ";</br>
cin >> side;
## 4.3 Operation
###### looping row
for(int i=1; i<=side;i++){
###### Adjusting each white space
while (space>spacecheker){</br>
cout <<"   ";</br>
spacecheker++;</br>
}</br>
spacecheker=1;</br>
space--;
###### make each loop
k=j; </br>
while(j>0){ </br>
cout << j<<"  " ;</br>
j--; </br>
} </br>
j=k+1;
###### new line
cout << endl;
## 4.4 Output Operation
 cout <<"   "; </br>
cout << j<<"  ";
