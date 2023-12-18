# 1. Problem Description
The program implements a menu-driven system to perform various operations on an input number such as reversing the digits, counting digits, finding sum and product of digits, checking if palindrome, finding frequency of digits etc.

# 2. Problem Analysis
- Input: User's choice of operation from menu and a number 
- Process: Performs the selected operation on the input number using loops, math functions, arrays etc. 
- Output: Displays result of selected operation on given number

# 3. Pseudocode

   1. Start
   2. Display menu options (1-11) 
   3. Take user's choice of operation
   4. If choice is 1-11, take an integer input number
   5. Use control structures to direct flow based on choice
   6. For choice 1:
   7. Initialize reversed to 0
   8.   Extract each digit using % operator
   9.    Append extracted digit to reversed 
   10.  Return reversed number
   11. For choice 2:
   12. Initialize count to 0
   13.  Divide number by 10 in loop to extract digits
   14.  Increment count in each iteration
   15.  Return final count
   16. For choice 3 (Sum of digits):
   17. Initialize sum to 0
   18. Extract each digit using % operator
   19. Add the extracted digit to sum
   20. Return final sum

   21. For choice 4 (Product of even digits):
   22. Initialize prod to 1
   23. Extract each digit using % operator
   24. Check if digit is even using % 2
   25. If even, multiply prod by digit
   26. Return final prod  

   27. For choice 5 (First and last digit sum):
   28. Get last digit using % operator
   29. Divide number by 10 in loop to get first digit
   30. Add first and last digits 
   31. Print sum

   32. For choice 6 (Swap first and last digit):
   33. Get last digit using % operator
   34. Get first digit by dividing number in loop
   35. Get remaining digits between first and last
   36. Construct swapped number using math functions
   37. Return swapped number

   38. For choice 7 (Check palindrome):
   39. Reverse the number 
   40. Compare reversed number with original number
   41. If equal, print palindrome, else not palindrome

   42. For choice 8 (Frequency of digits):
   43.  Initialize frequency array of size 10 with 0s
   44.  - Extract each digit and use it as index to increment frequency array
        45 - Print frequency array 
   46. For choice 9 (Check Armstrong Number):
     47 - Initialize num to number, digits to 0, temp to num
      48- Count digits by dividing temp by 10 in loop
      49- Initialize sum to 0 
      50- Extract each digit of num
      51- Raise the digit to power of total digits and add to sum
     52 - Compare sum with original number
     53 - If equal print Armstrong number else not Armstrong number

   55 .For choice 10 (Check Strong Number):
     56.  Initialize num to number, sum to 0, temp to num
      56. Extract each digit 
      57.Find factorial of digit in a loop
      58.Add factorial of each digit to sum
      59. Compare sum with original number
      60. If equal print Strong number else not Strong number  

   61. For choice 11 (Check Perfect Number):
   63. Initialize num to number, sum to 0 
   64.  Find factors of num in loop until num/2      
   65. If factor found, add to sum
   66. Compare sum with original number
   67. If equal print Perfect number else not Perfect number
   68. Similarly implement algorithms for other choices like sum, product, swap etc.
   69. For choice 0, exit
  70. Repeat steps 2-8 in a do-while loop with exit condition
   71. stop


