#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
    const int numQuestions = 10;
    char correctAnswers[numQuestions] = {'A', 'B', 'C', 'D', 'A', 'B', 'C', 'D', 'A', 'B'};
    char studentAnswers[numQuestions];

    
    cout << "Enter your answers for the 10 questions (A, B, C, or D):\n";
    for (int i = 0; i < numQuestions; ++i) {
        cout << "Question " << (i + 1) << ": ";
        cin >> studentAnswers[i];
    }

   
    int score = 0;
    cout << "\nTest Score:\n";
    cout << setw(15) << "Question" << setw(15) << "Correct" << setw(15) << "Yours" << endl;
    for (int i = 0; i < numQuestions; ++i) {
        cout << setw(15) << (i + 1);
        cout << setw(15) << correctAnswers[i];
        cout << setw(15) << studentAnswers[i];
        if (correctAnswers[i] == studentAnswers[i]) {
            cout << "  Correct\n";
            score++;
        } else {
            cout << "  Incorrect\n";
        }
    }

    cout << "\nTotal Score: " << score << " out of " << numQuestions << endl;

    return 0;
}
