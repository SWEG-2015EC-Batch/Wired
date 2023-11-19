# Problem Discription
write c++ program to calculate the body mass index of a person
# Problem Analysis
## Input
height (h)
weight (w)
## Output
Body mass index (BMI)
## Process/Operation
 read height as h weight as w and Body mass index as BMI 
 BMI=weigth/(heigth*heigth)
 Display the calculated BMI
 # Algorithm in pseudocode
 step 1: Start

 step 2: read weigth and heigth

 step 3: BMI = weigth/(heigth*heigth)
 
 step 4: Print BMI

 step 5: Stop
 # Algorithm in Flow chart

```mermaid
flowchart LR;
id1([start])
id2[/Read heigth, weigth/]
id3[BMI =  weigth/heigth*heigth]
id4[/Print BMI/]
id5([stop])
id1--> id2
id2--> id3
id3--> id4
id4--> id5
```
 # Design the program
 ## Variable declaration and initialization
 float weight,height=0.0;
 ## Reading input data
 cin>>weight>>height
 ## Perform operation
 BMI=weigth/(heigth*heigth)
 ## Print result
 cout<<"the BMI is"<<BMI<< endl;


