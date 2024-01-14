#include <iostream>
using namespace std;
int main(){
    int rows;
    int cols;
    cout<<"enter the number of rows:";
    cin>>rows;
    cout<<"enter the number of columns:";
    cin>>cols;
    int first[rows * cols], second[rows * cols], result[rows * cols];

    // Read elements of first array
    cout << "Enter elements of first array :" << endl;
    for (int i = 0; i < rows * cols; ++i) {
        cin >> first[i];
    }

    // Read elements of second array
    cout << "Enter elements of second array :" << endl;
    for (int i = 0; i < rows * cols; ++i) {
        cin >> second[i];
    }

    // Add corresponding elements and store in result array
    for (int i = 0; i < rows * cols; ++i) {

        result[i] = first[i] + second[i];
    }

    // Print the resulting data elements in table form
    cout << "\nResulting elements in table form:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            int index = i * cols + j; // Calculate 1D index from 2D coordinates
            cout << result[index] << "\t";
        }
        cout << endl;
    }
    return 0;}

