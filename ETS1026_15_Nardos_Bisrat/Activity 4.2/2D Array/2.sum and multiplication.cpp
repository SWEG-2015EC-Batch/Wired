#include <iostream>
using namespace std;

int main() {

    int rows;
    int cols;

    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;


    int matrix[rows][cols];


    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Enter element at position (" << i + 1 << ", " << j + 1 << "): ";
            cin >> matrix[i][j];
        }
    }


    for (int i = 0; i < rows; ++i) {
        int product = 1;
        for (int j = 0; j < cols; ++j) {
            product *= matrix[i][j];
        }
        cout << "Row " << i + 1 << " product: " << product << endl;
    }


    for (int j = 0; j < cols; ++j) {
        int sum = 0;
        for (int i = 0; i < rows; ++i) {
            sum += matrix[i][j];
        }
        cout << "Column " << j + 1 << " sum: " << sum << endl;
    }

    return 0;
}

