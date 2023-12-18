#include <iostream>
using namespace std;
int main() {
    float weight, height, BMI;
    char sex;
     // Get the number of people to calculate BMI for
    cout << "Enter the number of people you want to calculate: ";
    int n;
    cin >> n;
    // Loop through each person
    while (n > 0) {
        // Get user input for sex, weight, and height
        cout << "Enter your sex (M for male, F for female): ";
        cin >> sex;
         cout << "Enter your weight (in kilograms): ";
        cin >> weight;
        cout << "Enter your height (in meters): ";
        cin >> height;
        // Calculate BMI
        BMI = weight / (height * height);
        // Display BMI
        cout << "\nThe BMI of your body is: " << BMI << endl;
        // Analyze BMI based on sex
        if (sex == 'M') {
            cout << "\nYour sex is male ";
            if (BMI < 20.5) {
                cout << "\nYou are underweight";
            } else if (BMI <= 25.5) {
                cout << "\nYou are normal weight";
            } else if (BMI <= 29.9) {
                cout << "\nYou are overweight";
            } else {
                cout << "\nYou are obese";
            }
        } else {
            cout << "\nYour sex is female ";

            if (BMI < 18.5) {
                cout << "\nYou are underweight";
            } else if (BMI <= 24.5) {
                cout << "\nYou are normal weight";
            } else if (BMI <= 29.9) {
                cout << "\nYou are overweight";
            } else {
                cout << "\nYou are obese";
            }
        }
        // Decrement the counter
        n--;
        // Start the next loop iteration on a new line
        cout << endl;
    }  return 0;
}
