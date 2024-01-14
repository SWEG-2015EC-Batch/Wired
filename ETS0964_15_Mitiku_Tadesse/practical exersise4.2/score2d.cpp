#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of students: ";
    cin >> n;
    string names[n];
    int scores[n][5]; // Columns: test, quiz, assignment, project, final
    string statuses[n];
       for (int i = 0; i < n; i++) {
        cout << "\nEnter information for student " << i + 1 << " :" << endl;
        cout << "Name: ";
        cin >> names[i];
         cout << "Test score (out of 10): ";
        cin >> scores[i][0];
        cout << "Quiz score (out of 5): ";
        cin >> scores[i][1];
        cout << "Assignment score (out of 15): ";
        cin >> scores[i][2];
        cout << "Project score (out of 20): ";
        cin >> scores[i][3];
        cout << "Final score (out of 50): ";
        cin >> scores[i][4];
        int total = scores[i][0] + scores[i][1] + scores[i][2] + scores[i][3] + scores[i][4];
        if (total >= 80) {
            statuses[i] = "Excellent";
        } else if (total >= 60) {
            statuses[i] = "Very Good";
        } else if (total >= 50) {
            statuses[i] = "Fair";
        } else if (total >= 40) {
            statuses[i] = "Poor";
        } else {
            statuses[i] = "Fail";
        }
    }
    cout << "\nStudent Scores and Statuses in table form" << endl;
    cout << setw(15) << "Name" << setw(7) << "Test" << setw(7) << "Quiz" << setw(15) << "Assignment" << setw(7) << "Project"
         << setw(7) << "Final" << setw(7) << "Total" << setw(15) << "Status" << endl;

    for (int i = 0; i < n; i++) {
        cout << setw(15) << names[i];
        for (int j = 0; j < 5; j++) {
            cout << setw(7) << scores[i][j];
        }
        cout << setw(7) << scores[i][0] + scores[i][1] + scores[i][2] + scores[i][3] + scores[i][4] << setw(15) << statuses[i] << endl;
    }

    return 0;
}
