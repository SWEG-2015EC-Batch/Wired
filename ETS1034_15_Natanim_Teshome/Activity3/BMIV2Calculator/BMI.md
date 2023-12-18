# 1, problem description
Program to calculate BMI from heigth and weigth and make a description about the value for certain number of peoples
# 2, Problem analysis
## Input
Heigth, weigth , sex ,number of peoples
## Process
loop for certain number of people
compute BMI = weigth / heigth * heigth </br>
Accept sex </br>
Make discription based on given ranges </br>
## Output
BMI, discrption on BMI
# 3, Algorithm
## pseudocode
step 1:Start </br>
step 2: read numberofPeople </br>
step 3:if numberOfPeople > 0 </br></br>
step 4:read heigth , weigth , sex
step 5:compute BMI= weigth / heigth * heigth </br>
step 6:If sex is male then </br>
&emsp;&emsp;&emsp;&emsp;if BMI < 20.5 then </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;print it is underweigth </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;End if </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;if BMI <= 25.5 then </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp; print is is normal weigth </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;end if </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;if BMI <= 29.9 then </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;print is is over weigth </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;end if </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;else print you are obese </br>
end if </br>else
&emsp;&emsp;&emsp;&emsp;if BMI < 18.5 then </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;print it is underweigth </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;End if </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;if BMI <= 24.5 then </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp; print is is normal weigth </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;end if </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;if BMI <= 29.9 then </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;print is is over weigth </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;end if </br>
&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;else print you are obese </br>
end if</br>
step 7:number = number - 1 </br>
step 8:goto step 4</br>
step 9: stop
# program design 
## Variable declaration
float weight, height, BMI; </br>
char sex;</br>
int n;
## Input operation
cin >> n; </br>
cout << "Enter your sex (M for male, F for female): ";</br>
cin >> sex;</br>
cout << "Enter your weight (in kilograms): ";</br>
cin >> weight;</br>
cout << "Enter your height (in meters): ";</br>
cin >> height;
## operation
###### loop for next number 
while (n > 0){...}
###### selection for sex
if (sex == 'M') {
###### BMI suggestion for male
if (BMI < 20.5) {</br>
cout << "\nYou are underweight";</br>
} else if (BMI <= 25.5) {</br>
cout << "\nYou are normal weight";</br>
} else if (BMI <= 29.9) {</br>
cout << "\nYou are overweight";</br>
} else {</br>
cout << "\nYou are obese";</br>
}
###### BMI suggestion for female
if (BMI < 18.5) {</br>
cout << "\nYou are underweight";</br>
} else if (BMI <= 24.5) {</br>
cout << "\nYou are normal weight";</br>
} else if (BMI <= 29.9) {</br>
cout << "\nYou are overweight";</br>
} else {</br>
cout << "\nYou are obese";</br>
}
<
###### increament 
n--;

