#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of students: ";
    cin >> n;

    string name[n];
    int score[n];
    string status[n] = {"excellent", "verygood", "fair", "poor", "fail"}; 

    cout << "Enter the name and score :\n";
    for (int i = 0; i < n; i++) {
        cout << "Enter name for student " << i + 1 << ": ";
        cin >> name[i];

        cout << name[i] << "'s score: ";
        cin >> score[i];

        if (score[i] >= 80) {
            status[i] = "Excellent";
        } else if (score[i] >= 60) {
            status[i] = "Very Good";
        } else if (score[i] >= 50) {
            status[i] = "Fair";
        } else if (score[i] >= 40) {
            status[i] = "Poor";
        } else {
            status[i] = "Fail";
        }
    }

    cout << "\nStudents Name\tScore\tStatus\n";
    for (int i = 0; i < n; i++) {
        cout << name[i] << "\t\t" << score[i] << "\t" << status[i] << "\n";
    }

    return 0;
}