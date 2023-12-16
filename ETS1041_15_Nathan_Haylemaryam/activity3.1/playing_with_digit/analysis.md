
# 1 pseudocode
1. Display Menu:
   1. Reverse Number
   2. Count Digits
   3. Sum of Digits
   4. Product of Even Digits
   5. First and Last Digit
   6. Swap First and Last Digit
   7. Check Palindrome
   8. Digit Frequency
   9. Check Armstrong
   10. Check Strong
   11. Check Perfect

2. Read user's choice
3. Read an integer from the user

4. Switch (user's choice):
   Case 1:
      Print "Reversed Number: " + reverseNumber(integer)
   Case 2:
      Print "Number of Digits: " + countDigits(integer)
   Case 3:
      Print "Sum of Digits: " + sumOfDigits(integer)
   Case 4:
      Print "Product of Even Digits: " + productOfEvenDigits(integer)
   Case 5:
      Print "First Digit: " + getFirstDigit(integer)
      Print "Last Digit: " + getLastDigit(integer)
      Print "Sum of First and Last Digits: " + (getFirstDigit(integer) + getLastDigit(integer))
   Case 6:
      Print "Number after Swapping First and Last Digits: " + swapFirstAndLastDigits(integer)
   Case 7:
      Print "Is Palindrome: " + isPalindrome(integer)
   Case 8:
      Call countDigitFrequency(integer)
   Case 9:
      Print "Is Armstrong: " + isArmstrong(integer)
   Case 10:
      Print "Is Strong: " + isStrong(integer)
   Case 11:
      Print "Is Perfect: " + isPerfect(integer)
   Default:
      Print "Invalid choice!"

5. End
# 1 problem design
Variable Declaration:

int choice, num;
Input Operation:

Display Menu
Read user's choice
Read an integer from the user
Process:

Switch (user's choice):

Case 1:

Call reverseNumber(num)

Print "Reversed Number: "

Case 2:

Call countDigits(num)

Print "Number of Digits: "

Case 3:

Call sumOfDigits(num)

Print "Sum of Digits: "

Case 4:

Call productOfEvenDigits(num)

Print "Product of Even Digits: "

Case 5:

Call getFirstDigit(num)

Call getLastDigit(num)

Print "First Digit: "

Print "Last Digit: "

Print "Sum of First and Last Digits: "

Case 6:

Call swapFirstAndLastDigits(num)

Print "Number after Swapping First and Last Digits: "

Case 7:

Call isPalindrome(num)

Print "Is Palindrome: "

Case 8:

Call countDigitFrequency(num)

Case 9:

call isArmstrong(num)

Print "Is Armstrong: "

Case 10:

Call isStrong(num)

Print "Is Strong: "

Case 11:

Call isPerfect(num)

Print "Is Perfect: "

Default:

Print "Invalid choice!"

Output Operation:

End
