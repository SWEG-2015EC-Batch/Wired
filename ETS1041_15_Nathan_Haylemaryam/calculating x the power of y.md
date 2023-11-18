# 1,Problem Description
Write a program that find the result of the expression X power of y which accept two number(x,y) by user.
# 2, Problem Analysis
## Input 
base </br>
power </br>
## Output 
result
## Process
result = base ^ power </br>
# 3, Algoritm Design (In Psuedocode) </br>
step 1 : Start </br>
step 2 : read base, power </br>
step 3 : compute result = base ^ power</br>
step 4 : Print result </br>
Step 5 : Stop </br>

ALGORITHM(FLOWCHART)

```mermaid
flowchart LR;
id1([start])
id2[/Read base, power/]
id3[result = base ^ power]
id4[/Print result/]
id5([stop])
id1-->id2
id2--> id3
id3--> id4
id4--> id5
```
# 4,Design the program(in C++)
##### 4.1 Importing library(cmath library)
include \<cmath\>
##### 4.2 Variable declaration and intialization
double base,power; </br>
##### 4.3 Reading the input data
cout << "enter the first number ";</br>
cin >> base;</br>
cout << "enter the secound number  ";</br>
cin >> power;
##### 4.4 Main operation 
result = pow(base, power);
##### 4.5 printing on screen
cout << "the result is equals to " << pow(base,power);
