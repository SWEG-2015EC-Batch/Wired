# 1,Problem Description
Write a program to calculate a time to send data to serial transmitter which can transmit 960 charcter per second.
# 2,Problem Analysis
## Input 
size of data to be transmit(dataValue in mb)
## Output 
time it takes to tramsimt(time)
## Process
time = sendrate * dataValue </br>
# 3, Algoritm Design (In Psuedocode) </br>
step 1 : Start </br>
step 2 : read data_value</br>
step 3 : data_value = data_value * 1048576 byte/mb </br>
step 4 : time = dataValue/sendrate </br>
Step 5 : time = time / (24 * 3600) in  days </br>
step 6 : print time </br>
step 7 : stop </br>
# 4,Design the program
##### 3.1 Variable declaration and intialization
float dataValue, time;</br>
##### 3.2 Constant Declaration and intialization
#define sendRate 960 
##### 3.3 Reading the input data
cout << "enter the amount of data in mb  "; </br>
cin >> dataValue;
##### 3.4 main operation
dataValue = dataValue * 1048576; //to change mb to byte// </br>
time = dataValue / sendRate;
##### 3.5 print the output
cout << "The time requrired is" << time << "in second and "; </br>
-to change time in second to days(integer)  
cout << int((time/(24*3600))+0.5)<< " in days";</br
