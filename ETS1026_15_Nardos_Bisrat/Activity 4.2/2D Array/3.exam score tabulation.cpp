#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    const int numComponents = 5;
    string components[numComponents] = {"Test", "Assignment", "Quiz", "Project", "Final"};
    int scores[numComponents];
    int totalScore = 0;
    string scoreLevel;


    cout << "Enter the scores for each component:\n";
    for (int i = 0; i < numComponents; ++i) {
        cout << components[i] << ": ";
        cin >> scores[i];
        totalScore += scores[i];
    }


    if (totalScore >= 80) {
        scoreLevel = "Excellent";
    } else if (totalScore >= 60) {
        scoreLevel = "Very Good";
    } else if (totalScore >= 50) {
        scoreLevel = "Fair";
    } else if (totalScore >= 40) {
        scoreLevel = "Poor";
    } else {
        scoreLevel = "Fail";
    }


    cout << "\nExam Scores Summary:\n";
    cout << "Component" << setw(20) << "Score" << endl;
    cout << "--------" << setw(20) << "-----" << endl;
    for (int i = 0; i < numComponents; ++i) {
        cout << components[i] << setw(23) << scores[i] << endl;
    }
    cout << "Total" << setw(23) << totalScore << endl;
    cout << "Score Level" << setw(17) << scoreLevel << endl;

    return 0;
}

