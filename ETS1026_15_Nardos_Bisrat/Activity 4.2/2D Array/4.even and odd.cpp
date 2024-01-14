#include <iostream>

using namespace std;

int main() {
    const int rows = 3, cols = 4;
    int matrix[rows][cols];
    int sumEven = 0;
 cout << "Enter the elements of the 3x4 matrix:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> matrix[i][j];
        }
    }

    
    cout << "\nModified Matrix:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (matrix[i][j] % 2 == 0) {
                sumEven += matrix[i][j];
                cout << matrix[i][j] << "\t"; 
            } else {
                cout << "*" << "\t";         
            }
        }
        cout << endl;
    }

    cout << "\nSum of even elements: " << sumEven << endl;

    return 0;
}



