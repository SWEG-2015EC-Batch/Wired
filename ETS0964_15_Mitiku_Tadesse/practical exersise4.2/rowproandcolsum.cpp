// product of rowo a and sum of of column
#include <iostream>
using namespace std;
int main(){
    int rows, cols;

    cout << "Enter the number of rows and columns: "<<endl;
    cin >> rows >> cols;

    int arr[rows][cols];

    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < rows; i++) {
        int rowProduct = 1;
        for (int j = 0; j < cols; j++) {
            rowProduct *= arr[i][j];
        }
        cout << "Product of row " << i + 1 << ": " << rowProduct << endl;
    }
    for (int j = 0; j < cols; j++) {
        int colSum = 0;
        for (int i = 0; i < rows; i++) {
            colSum += arr[i][j];
        }
        cout << "Sum of column " << j + 1 << ": " << colSum << endl;
    }

    return 0;
}