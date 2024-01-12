# Problem Discription
write c++ program to calculate x the power of y
# Problem Analysis
## Input
int x(base)
int y(power)
## Output
result
## Process/Operation
result = base ^ power
 Display result
 # Algorithm in pseudocode
 step 1: Start

 step 2: read x and y

 step 3: X^Y
 
 step 4: Print result

 step 5: Stop
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
 # Design the program
 ## Variable declaration and initialization
 int x,y
 ## Reading input data
 cout<<"Enter the value of x and y";
 cin>>x>>y;
 ## Perform operation
result=pow(x,y);
 ## Print result
 cout<<"the result of X^Y is"<<result<< endl;
