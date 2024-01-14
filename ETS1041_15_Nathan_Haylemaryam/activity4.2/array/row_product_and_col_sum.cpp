#include <iostream>

using namespace std;
int main()
{
    int const sizerow = 10;
    int const sizecols = 10;
    int row, col;
    int array1[sizerow][sizecols];

    cout << "enter the size of row for array1 ";
    cin >> row;
    cout << "enter the size of columun for array1: ";
    cin >> col;
    ;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "row: " << i << " ,col: " << j << " ";
            cin >> array1[i][j];
        }
    }
    for (int i = 0; i < row; i++)
    {
        int product = 1;
        for (int j = 0; j < col; j++)
        {
            product *= array1[i][j];
        }
        cout << "Product of elements in row " << i + 1 << ": " << product << endl;
    }
    for (int j = 0; j < col; j++)
    {
        int colSum = 0;
        for (int i = 0; i < row; i++)
        {
            colSum += array1[i][j];
        }
        cout << "Sum of elements in column " << j + 1 << ": " << colSum << endl;
    }
}
