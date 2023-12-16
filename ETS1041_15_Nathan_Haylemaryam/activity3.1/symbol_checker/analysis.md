# 1,Problem Discription
program that tells whether a character entered from the keyboard is in upper case or in lower case or digit or special character.Update the program to check if the number is eve/odd and also the alphabet is vowel or consonant.</br>
# 2,Problem Analysis
## Input 
Character</br>
## Output
the attribute of character </br>
## Process
check if a letter is alphabet, number and symbol  </br>
check if it is alphabet, check if it lowercase or upper case and check if it is vowel and consonant </br>
check if it is even (number mod 2 is 0) and odd(number mod 2 is not 0) </br>
# 3 Alogrithim
## 3.1 Pseudocode
step 1 : Start </br>
step 2: read character </br>
step 3: if character is alphabet then </br>
&nbsp;&nbsp;&nbsp;&nbsp; &nbsp;&nbsp;&nbsp;&nbsp;If character is uppercase then </br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;if charcter is a,e,i,o,u then </br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;print uppercase , vowel </br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;else print uppercase , consonant </br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;else if charcter is a,e,i,o,u then </br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;print lowercase , vowel </br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;else print lowercase , consonant </br>              
else if character is number then </br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;if number % 2 = 0 then </br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;print number is even </br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;else print number is odd </br>
else Print it is symbol </br>
step 4: stop
# 4 program design 
## 4.1 variable declaration
char letter;
## 4.2 Input
cout << "enter the letter."; </br>
cin >> letter;</br>
## 4.3 main operation
<b>check if it is alphabet , either upper or lower , either vowel or consonant</br></b>
if(alphaChecker == true) {</br>
        if(isupper(letter) == true){</br>
            if(letter == 'A' || letter == 'E' ||letter == 'I' ||letter == 'O' ||letter == 'U'){</br>
                cout << "Letter is uppercase and vowel letter.";</br>
                     } else{</br>
                    cout << "Letter is uppercase and consonant.";</br>
                    }</br>
             }else{</br>
                 if(letter == 'a' || letter == 'e' ||letter == 'i' ||letter == 'o' ||letter == 'u'){</br>
                 cout << "Letter is lowercase and vowel letter.";</br>
                     } else{</br>
                    cout << "Letter is lowercase and consonant.";</br>
                    }</br>
                }  }</br>
<b>to check it is number and if it is even or odd</b></br>
else if(isdigit(letter)== true){</br>
            int digit = atoi(&letter); //changing character to number</br>
            cout << digit;</br>
                if(digit % 2 == 0){</br>
                    cout << "Letter is even number";</br>
                    }else{</br>
                        cout<< "Letter is odd number";</br>
                    }</br>
        }</br>
<b>to check if it is symbol</b></br>
 else { </br>
  cout << "You entered a symbol.";</br>
         }</br>
## 4.4 Output operation
cout << "Letter is uppercase and vowel letter.";</br>
cout << "Letter is uppercase and consonant.";</br>
cout << "Letter is lowercase and vowel letter.";</br>
cout << "Letter is lowercase and vowel letter.";</br>
cout << "Letter is even number";</br>
cout<< "Letter is odd number";</br>
cout << "You entered a symbol.";</br>
