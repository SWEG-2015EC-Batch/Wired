#include <iostream>
#include <iomanip>

using namespace std;

int main() {
 int totalMarks[50];
    int scoreStatus[50];
    int i;
  int n;

    cout << "Enter the total number of students: ";
    cin >> n;

    for(i = 0; i < n; i++) {
        cout << "Enter the total marks of student " << i+1 << ": ";
        cin >> totalMarks[i];

        if(totalMarks[i] >= 80) {
            scoreStatus[i] = 1;
        } else if(totalMarks[i] >= 60) {
            scoreStatus[i] = 2;
        } else if(totalMarks[i] >= 50) {
            scoreStatus[i] = 3;
        } else if(totalMarks[i] >= 40) {
            scoreStatus[i] = 4;
        } else {
            scoreStatus[i] = 5;
        }
    }

    cout << "\n\nStudent Marks Report: " << endl;
    
    cout << "Total Marks\tScore Status" << endl;
    
    for(i = 0; i < n; i++) {
        cout << totalMarks[i] << "\t\t";
        switch(scoreStatus[i]) {
            case 1: cout << "Excellent"; break;
            case 2: cout << "Very Good"; break;
            case 3: cout << "Fair"; break;
            case 4: cout << "Poor"; break;
            case 5: cout << "Fail"; break;
        }

        cout << endl;
    }
  return 0;
}

