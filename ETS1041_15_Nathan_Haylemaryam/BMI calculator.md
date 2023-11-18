# 1,Problem Discription
Write a program that calculate Body mass index from reading heigth and weigth</br>
# 2,Problem Analysis
## Input 
Heigth</br>
Wiegth</br>
## Output
Body mass index (BMI)
## Process
BMI = Wiegth/ Heigth * Heigth </br>
# 3, Algoritm Design 
## 3,1 In Psuedocode
step 1 : Start </br>
step 2 : read wiegth and heigth </br>
step 3 : compute BMI =  Wiegth/ Heigth * Heigth </br>
step 4 : Print BMI </br>
Step 5 : Stop </br>
## 3.2 In Flow chart
ALGORITHM(FLOWCHART)

```mermaid
flowchart LR;
id1([start])
id2[/Read heigth, wiegth/]
id3[BMI =  Wiegth/ Heigth * Heigth]
id4[/Print BMI/]
id5([stop])
id1--> id2
id2--> id3
id3--> id4
id4--> id5
```
# 4,Design the program
##### 3.1 Variable declaration and intialization
float heigth,weigth = 0.0; </br>
##### 3.2 Reading the input data
cin >> Heigth; </br>
cin >> Wiegth; </br>
##### 3.3 Main operation 
BMI =  Wiegth/ Heigth * Heigth </br>
##### 3.4 printing on screen
cout <<  "BMI is" << Wiegth/ Heigth * Heigth;
