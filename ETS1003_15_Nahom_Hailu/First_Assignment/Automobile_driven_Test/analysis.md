# 1,Problem Discription
1,Write a program that calculate the number miles the automobile can be driven which prompts capacityin gallon of an automobile fuel tank and the miles per gallon can be driven
# 2,Problem Analysis
## Input 
-Capacity of automobile fuel tank in gallon(capacity of tank) </br>
-mile per gallon the car can travel(milepergallon)
## Output
-the number of miles the car can be driven(totalDrive)
## Process
-Totaldrive = capacity of Tank * mile per gallon
# 3, Algoritm Design 
## 3.1 (In Psuedocode)
step 1 : Start </br>
step 2 : read  capacity of tank , milepergallon </br>
step 3 : compute totalDrive = capacity of tank * milepergallon </br>
step 4 : Print totalDrive </br>
Step 5 : Stop </br>
## 3.2 In Flow chart
ALGORITHM(FLOWCHART)

```mermaid
flowchart LR;
id1([start])
id2[/Read capacity of tank , milepergallon/]
id3[compute totalDrive = capacity of tank * milepergallon]
id4[/Print totalDrive/]
id5([stop])
id1-->id2
id2--> id3
id3--> id4
id4--> id5
```
# 4,Design the program
##### 3.1 Variable declaration and intialization
float capacity of tank, milepergallon,totalDrive = 0; </br>
##### 3.2 Reading the input data
cout << "Enter the capacity in gallon the capacity of fuel tank";</br>
cin >> capacity of tank; </br>
cout << " Enter the miles the car could be driven per gallon";</br>
cin >> milepergallon; </br>
##### 3.3 Main operation
totalDrive = capacityOfTank * milePerGallon; </br>
##### 3.4 printing on screen
cout << "Therefore the car can go " << totalDrive << " miles.";
