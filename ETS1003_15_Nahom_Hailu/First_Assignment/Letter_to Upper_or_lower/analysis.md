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
# 3, Algoritm Design (In Psuedocode) </br>
step 1 : Start </br>
step 2 : read letter </br>
step 3 : If letter is upper </br>
then: new_letter = lower(letter) </br>
Else : new_letter = upperletter) </br>
endif </br>
step 4 : Print BMI </br>
Step 5 : Stop </br>
# 4,Design the program(in C++)
##### 3.1 Importing library(ctype library)
include <ctype.h>
##### 3.2 Variable declaration and intialization
char letter, new letter </br>
##### 3.3 Reading the input data
cout << "Enter the letter" << endl;
cin >> letter;
##### 3.4 Main operation 
###### 3.4.1 checking the letter if it is capital using if (isupper(letter) == true){...}
###### 3.4.2 opration to change it to lowercase using newLetter = tolower(letter) 
###### 3.4.3 opration to change it to uppercase using  newLetter = toupper(letter)
##### 3.5 printing on screen
cout << "New letter is "<<"\""<<newLetter << "\""
