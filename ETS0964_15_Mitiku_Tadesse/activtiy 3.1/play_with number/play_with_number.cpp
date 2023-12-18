

#include <iostream>
#include <cmath>
using namespace std;

int reverseNumber(int number) {
    int reversedNumber = 0;
    while (number != 0) {
        int remainder = number % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        number /= 10;
    }
    cout << "Reversed number: " << reversedNumber << endl;
    return reversedNumber;
}

int countDigits(int number) {
    int count = 0;
    while (number != 0) {
        number /= 10;
        count++;
    }
    cout << "Number of digits: " << count << endl;
    return count;
}

int sumOfDigits(int number) {
    int sum = 0;
    while (number != 0) {
        int digit = number % 10;
        sum += digit;
        number /= 10;
    }
    cout << "Sum of digits: " << sum << endl;
    return sum;
}

int productOfEvenDigits(int number) {
    int product = 1;
    while (number != 0) {
        int digit = number % 10;
        if (digit % 2 == 0)
            product *= digit;
        number /= 10;
    }
    cout << "Product of even digits: " << product << endl;
    return product;
}

int swapFirstAndLastDigit(int number) {
    int lastDigit = number % 10;
    int numDigits = 0;
    int temp = number;

    while (temp != 0) {
        temp /= 10;
        numDigits++;
    }

    int firstDigit = number / static_cast<int>(pow(10, numDigits - 1));
    int middleDigits = number % static_cast<int>(pow(10, numDigits - 1)) / 10;

    int swappedNumber = lastDigit * static_cast<int>(pow(10, numDigits - 1)) + middleDigits * 10 + firstDigit;

    cout << "Swapped number: " << swappedNumber << endl;
    return swappedNumber;
}

int isPalindrome(int number) {
    bool result = number == reverseNumber(number);
    cout << "Is palindrome: " << (result ? "Yes" : "No") << endl;
    return result;
}

int isArmstrongNumber(int number) {
    int originalNumber = number;
    int numDigits = 0;
    int temp = number;

    while (temp != 0) {
        temp /= 10;
        numDigits++;
    }

    int sum = 0;

    while (number != 0) {
        int digit = number % 10;
        sum += pow(digit, numDigits);
        number /= 10;
    }

    bool result = sum == originalNumber;
    cout << "Is Armstrong number: " << (result ? "Yes" : "No") << endl;
    return result;
}

int isStrongNumber(int number) {
    int originalNumber = number;
    int sum = 0;
    while (number != 0) {
        int digit = number % 10;
        int factorial = 1;
        for (int i = 1; i <= digit; i++) {
            factorial *= i;
        }
        sum += factorial;
        number /= 10;
    }
    bool result = sum == originalNumber;
    cout << "Is Strong number: " << (result ? "Yes" : "No") << endl;
    return result;
}

int isPerfectNumber(int number) {
    int sum = 0;
    for (int i = 1; i < number; i++) {
        if (number % i == 0) {
            sum += i;
        }
    }
    bool result = sum == number;
    cout << "Is Perfect number: " << (result ? "Yes" : "No") << endl;
    return result;
}

int printDigitFrequency(int number) {
    int digitCount[10] = {0};

    while (number != 0) {
        int digit = number % 10;
        digitCount[digit]++;
        number /= 10;
    }

    cout << "Digit\tFrequency\n";
    for (int i = 0; i < 10; i++) {
        if (digitCount[i] > 0) {
            cout << i << "\t" << digitCount[i] << endl;
        }
    }
}

int main() {
    int number;
    int choice;

    while (true) {
        cout << "Menu:" << endl;
        cout << "1. Reverse the number" << endl;
        cout << "2. Count the number of digits" << endl;
        cout << "3. Find the sum of the digits" << endl;
        cout << "4. Find the product of even digits" << endl;
        cout << "5. Swap the first and last digit" << endl;
        cout << "6. Check if the number is a palindrome" << endl;
        cout << "7. Check if the number is an Armstrong number" << endl;
        cout << "8. Check if the number is a Strong number" << endl;
        cout << "9. Check if the number is a Perfect number" << endl;
        cout << "10. Find the frequency of each digit in the number" << endl;
        cout << "11. Exit" << endl;
        cout << "Enter your choice (1-11): ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter a number: ";
                cin >> number;
                reverseNumber(number);
                break;

            case 2:
                cout << "Enter a number: ";
                cin >> number;
                countDigits(number);
                break;

            case 3:
                cout << "Enter a number: ";
                cin >> number;
                sumOfDigits(number);
                break;

            case 4:
                cout << "Enter a number: ";
                cin >> number;
                productOfEvenDigits(number);
                break;

            case 5:
                cout << "Enter a number: ";
                cin >> number;
                swapFirstAndLastDigit(number);
                break;

            case 6:
                cout << "Enter a number: ";
                cin >> number;
                isPalindrome(number);
                break;

            case 7:
                cout << "Enter a number: ";
                cin >> number;
                isArmstrongNumber(number);
                break;

            case 8:
                cout << "Enter a number: ";
                cin >> number;
                isStrongNumber(number);
                break;

            case 9:
                cout << "Enter a number: ";
                cin >> number;
                isPerfectNumber(number);
                break;

            case 10:
                cout << "Enter a number: ";
                cin >> number;
                printDigitFrequency(number);
                break;

            case 11:
                return 0;

            default:
                cout << "Invalid choice. Please enter a number from 1 to 11." << endl;
        }

        cout << endl;
    }

    return 0;

}




















