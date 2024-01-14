#include <iostream>
#include <string>

using namespace std;

int main() {
    const int numQuestions = 10;
    string correctAnswers[numQuestions] = {"A", "C", "B", "D", "A", "C", "B", "D", "A", "B"};  // Replace with actual answers
    string studentAnswers[numQuestions];
    int score = 0;

    // Get student answers
    for (int i = 0; i < numQuestions; ++i) {
        cout << "Question " << i + 1 << ": Enter your answer (A, B, C, or D): ";
        cin >> studentAnswers[i];
    }

    
    for (int i = 0; i < numQuestions; ++i) {
        if (studentAnswers[i] == correctAnswers[i]) {
            score++;
            cout << "Question " << i + 1 << ": Correct!" << endl;
        } else {
            cout << "Question " << i + 1 << ": Incorrect. Correct answer: " << correctAnswers[i] << endl;
        }
    }

    cout << "\nYour test score: " << score << " out of " << numQuestions << endl;

    return 0;
}

