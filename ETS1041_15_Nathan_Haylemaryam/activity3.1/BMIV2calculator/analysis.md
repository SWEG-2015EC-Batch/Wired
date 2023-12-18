# 1 problem decripiton
a program that calculates the BMI based on gender and give sugession on the range of the bmi 
# 1 problem analysis
## input
weight, height, gender
## process
calculate the BMI = weight/(height*height)

find the respective sugession based on the range

## output

the result of the BMI with sugession

# Pseudocode

1 start

2 promt the user to enter their height and weight

3 promt the user to enter their geneder

4 calaculate the BMI = weight/(height*height)

5 if their gender is male then

         if their BMI is BMI<20.5 then print you are underweight
         if their BMI is BMI<25.5 then print you are normalweight
         if their BMI is BMI<29.9 then print you are overweight
         if their BMI is BMI>29.9 then print you are obese
         
6 if their gender is female then

         if their BMI is BMI18.5 then print you are underweight
         if their BMI is BMI<24.5 then print you are normalweight
         if their BMI is BMI<29.9 then print you are overweight
         if their BMI is BMI>29.5 then print you are obese        
7 print gender  ,BMI, sugesstion 

8 stop
