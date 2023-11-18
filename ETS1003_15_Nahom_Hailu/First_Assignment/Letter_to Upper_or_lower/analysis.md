# 1,Problem Discription
Write a program that converts a letter to Uppercase or Lowercase if it is lowercase or uppercase repectively </br>
# 2,Problem Analysis
## Input 
a letter(Upper or lowercase)</br>
## Output 
new letter(lower or upper case equvalent)
## Process
1,check whether upper or lower </br>
2,change to upper if lower </br>
3,change to lower if upper </br>
# 3, Algoritm Design 
## 3.1 In Psuedocode
step 1 : Start </br>
step 2 : read letter </br>
step 3 : If letter is upper </br>
then: new_letter = lower(letter) </br>
Else : new_letter = upperletter) </br>
endif </br>
step 4 : Print newletter </br>
Step 5 : Stop </br>
## #.2 In flowchart
ALGORITHM(FLOWCHART)

```mermaid
graph LR;
id1([Start])-->id2[/read letter/]
id2--> id3{is letter upper case?}
id3--> id4[newletter = lowerofletter]
id3--> id5[newletter = upperofletter]
id4--> id6[print newletter]
id5--> id6[print newletter]
id6--> id7([Stop])
```
# 4,Design the program(in C++)
##### 4.1 Importing library(ctype library)
include <ctype.h>
##### 4.2 Variable declaration and intialization
char letter, new letter </br>
##### 4.3 Reading the input data
cout << "Enter the letter" << endl;
cin >> letter;
##### 4.4 Main operation 
###### 4.4.1 checking the letter if it is capital using if (isupper(letter) == true){...}
###### 4.4.2 opration to change it to lowercase using newLetter = tolower(letter) 
###### 4.4.3 opration to change it to uppercase using  newLetter = toupper(letter)
##### 4.5 printing on screen
cout << "New letter is "<<"\""<<newLetter << "\""
