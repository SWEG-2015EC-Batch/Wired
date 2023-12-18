#include <iostream>
#include <cmath>

using namespace std;

int reverseNumber(int num) {
    int reversedNum = 0;
    while (num > 0) {
        reversedNum = reversedNum * 10 + num % 10;
        num /= 10;
    }
    return reversedNum;
}

int countDigits(int num) {
    int count = 0;
    while (num > 0) {
        num /= 10;
        count++;
    }
    return count;
}

int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int productOfEvenDigits(int num) {
    int product = 1;
    while (num > 0) {
        int digit = num % 10;
        if (digit % 2 == 0) {
            product *= digit;
        }
        num /= 10;
    }
    return product;
}

int getFirstDigit(int num) {
    while (num >= 10) {
        num /= 10;
    }
    return num;
}

int getLastDigit(int num) {
    return num % 10;
}

int swapFirstAndLastDigits(int num) {
    int digits = countDigits(num);
    int first = getFirstDigit(num);
    int last = getLastDigit(num);
    int withoutFirstLast = num % static_cast<int>(pow(10, digits - 1));

    return last * static_cast<int>(pow(10, digits - 1)) + withoutFirstLast / 10 + first;
}

bool isPalindrome(int num) {
    return num == reverseNumber(num);
}

void countDigitFrequency(int num) {
    int frequency[10] = {0};
    while (num > 0) {
        frequency[num % 10]++;
        num /= 10;
    }

    cout << "Digit\tFrequency" << endl;
    for (int i = 0; i < 10; ++i) {
        if (frequency[i] > 0) {
            cout << i << "\t" << frequency[i] << endl;
        }
    }
}

bool isArmstrong(int num) {
    int originalNum = num;
    int numDigits = countDigits(num);
    int sum = 0;

    while (num > 0) {
        sum += static_cast<int>(pow(num % 10, numDigits));
        num /= 10;
    }

    return sum == originalNum;
}

bool isStrong(int num) {
    int originalNum = num;
    int sum = 0;

    while (num > 0) {
        int digit = num % 10;
        int factorial = 1;
        for (int i = 1; i <= digit; ++i) {
            factorial *= i;
        }
        sum += factorial;
        num /= 10;
    }

    return sum == originalNum;
}

bool isPerfect(int num) {
    int sum = 0;
    for (int i = 1; i <= num / 2; ++i) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum == num;
}

int main() {
    int num, choice;

    do {
        // Get input from user
        cout << "Enter an integer (0 to exit): ";
        cin >> num;

        if (num == 0) {
            break; // Exit the loop if the user enters 0
        }

        // Display menu
        cout << "Menu:" << endl;
        cout << "1. Reverse Number" << endl;
        cout << "2. Count Digits" << endl;
        cout << "3. Sum of Digits" << endl;
        cout << "4. Product of Even Digits" << endl;
        cout << "5. First and Last Digit" << endl;
        cout << "6. Swap First and Last Digit" << endl;
        cout << "7. Check Palindrome" << endl;
        cout << "8. Digit Frequency" << endl;
        cout << "9. Check Armstrong" << endl;
        cout << "10. Check Strong" << endl;
        cout << "11. Check Perfect" << endl;

        cout << "Enter your choice (1-11): ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Reversed Number: " << reverseNumber(num) << endl;
                break;
            case 2:
                cout << "Number of Digits: " << countDigits(num) << endl;
                break;
            case 3:
                cout << "Sum of Digits: " << sumOfDigits(num) << endl;
                break;
            case 4:
                cout << "Product of Even Digits: " << productOfEvenDigits(num) << endl;
                break;
            case 5:
                cout << "First Digit: " << getFirstDigit(num) << endl;
                cout << "Last Digit: " << getLastDigit(num) << endl;
                cout << "Sum of First and Last Digits: " << getFirstDigit(num) + getLastDigit(num) << endl;
                break;
            case 6:
                cout << "Number after Swapping First and Last Digits: " << swapFirstAndLastDigits(num) << endl;
                break;
            case 7:
                cout << "Is Palindrome: " << (isPalindrome(num) ? "Yes" : "No") << endl;
                break;
            case 8:
                countDigitFrequency(num);
                break;
            case 9:
                cout << "Is Armstrong: " << (isArmstrong(num) ? "Yes" : "No") << endl;
                break;
            case 10:
                cout << "Is Strong: " << (isStrong(num) ? "Yes" : "No") << endl;
                break;
            case 11:
                cout << "Is Perfect: " << (isPerfect(num) ? "Yes" : "No") << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
                break;
        }

    } while (choice != 0);

    return 0;
}
