# 1,Problem Discription
Program to draw rectangle with continous letter
# 2,Program Analysis
## Input
row , colomn
## process
make a row with letter starting from a to letter </br>
repeat it for row times 
## Output
rectangle with letter
# 3, Algorithm
## 3.1 Pseudocode
step 1:Start </br>
step 2: read row , colomn </br>
step 3: compute i=1 , j=1,k=1 </br>
step 4.1: if row>= i then </br>
&emsp;&emsp;&emsp;&emsp;step 4.2j=1</br>
&emsp;&emsp;&emsp;&emsp;if colomn>=j then </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;print A-1+k </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;k=k+1 </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;j=j+1 </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;goto step 4.1 </br>
&emsp;&emsp;&emsp;&emsp;end if</br>
&emsp;&emsp; print (new line)</br>
&emsp;&emsp;i=i+1 </br>
&emsp;&emsp;goto step 4.1 </br>
End if</br>
step 5: stop
## Flowchart
<img src="Flowcharts.jpeg"> </br>
# 4 problem Design 
## 4.1 Vaiable declaration
int colomn,row;</br>
int j=1;</br>
int i=1; </br>
int k(1);
## 4.2 Input Operation
cout<< "enter the row: "; </br>
cin >> row;</br>
cout << "enter the colomn: ";</br>
cin >> colomn;
## 4.3 Operation
###### loop for rows
for(int i=1; row>=i; i++){
###### loop for one row 
for(int j=1; colomn>=j; j++){ </br>
###### change to integer to character
cout << char(64+k)<< " ";</br>
k++; </br>
     }
###### to new line
cout << endl;
## 4.4 Output Operation
cout << char(64+k)<< " ";</br>
cout << endl;

