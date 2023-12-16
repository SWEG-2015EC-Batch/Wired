# 1,Problem Description
program that converts a mark of a course entered from the keyboard to its corresponding letter-grade according to grade </br>
# 2,Problem Analysis
## Input
mark of course
## operation
change mark to grade according to its mark
## Output
grade
# 3,Alogoritm
## 3.1 Pseudocode
step 1: start </br>
step 2: read grade </br>
step 3: if grade > 90 then </br>
&emsp;&emsp;result = A+ </br>
&emsp;&emsp;&emsp;else if grade >= 80 then </br>
&emsp;&emsp;&emsp;&emsp;result = A </br>
&emsp;&emsp;&emsp;&emsp;&emsp;else if grade >= 75 then </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;result = B+ </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;else if grade >= 60 then </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;result = B 
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;else if grade >= 55 then </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;result = C+ </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;else if grade >= 45 then </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;result = C </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;else if grade >= 30 then </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp; result = D </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;else if grade >= 0 then </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;result = F</br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp; else goto 2 <br>
step 4: print result
# 4,Program Design
## 4.1, Varable declaration
int grade;
## 4.2 Input
cout << "Enter the grade";</br>
cin >> grade; </br>
## 4.3 Operation
##### grade assigning operation </br>
if(grade<100 && grade >0){</br>
  if(grade>=90){</br>
    cout << "grade: A+";</br>
        }else if(grade>=80){</br>
        cout << "grade: A";</br>
            }else if(grade>=75){</br>
             cout << "grade: B+";</br>
                 }else if(grade>=60){</br>
                  cout << "grade: B";</br>
                     }else if(grade>=55){</br>
                        cout << "grade: C+";</br>
                             }else if(grade>=45){</br>
                                 cout << "grade: C";</br>
                                     }else  if(grade>=30){</br>
                                         cout << "grade: D";</br>
                                             }else{</br>
                                                cout << "grade: F";</br>
                                                     }</br>
##### restricting the mark
while(grade>100 || grade<0){ </br>
cout << "Enter the valid grade\n";</br>
cin >> grade;</br>
}</br>
## 4.4 Output Operation
cout << "grade: ";

;step 5: stop

