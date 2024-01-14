#include <iostream>
#include <cctype> 
using namespace std;

int main() {
    char correctAnswers[10] = {'A', 'C', 'B', 'A', 'D', 'B', 'C', 'A', 'D', 'B'}; 
    char studentAnswers[10]; 
    int score = 0;

    for (int i = 0; i < 10; i++) {
        char answer;
        do {
            cout << "Answer for question " << i + 1 << ": ";
            cin >> answer;
            answer = toupper(answer); 
            if (answer != 'A' && answer != 'B' && answer != 'C' && answer != 'D') {
                cout << "Invalid answer. Please enter A, B, C, or D." << endl;
            }
        } while (answer != 'A' && answer != 'B' && answer != 'C' && answer != 'D');

        studentAnswers[i] = answer;
    }

    for (int i = 0; i < 10; i++) {
        if (studentAnswers[i] == correctAnswers[i]) {
            score++;
        }
    }

    cout << "\nMarked Student Answers:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Question " << i + 1 << ": " << studentAnswers[i] << " (" << (studentAnswers[i] == correctAnswers[i] ? "Correct" : "Incorrect") << ")" << endl;
    }

    cout << "\nYour score: " << score << " out of 10" << endl;

    return 0;
}

