#include <iostream>
using namespace std;

int main()
{
    int const max_row = 10;
    int const max_col = 10;

    int first[max_row][max_col];
    int second[max_row][max_col];
    int res_mat[max_row][max_col];
    int i, j, rows, cols;
    cout << "enter the first matrix: \n";
    cout << "enter the number of rows: \n";
    cin >> rows;
    cout << "enter the number of cols: ";
    cin >> cols;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "enter the value of rows" << i << ", col" << j << ":";
            cin >> first[i][j];
        }
    }
    cout << "enter the second matrix: \n";
    cout << "enter the number of rows: \n";
    cin >> rows;
    cout << "enter  the number of clos: ";
    cin >> cols;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "\nenter the value of the rows" << i << " ,col" << j << " ";
            cin >> second[i][j];
        }
    }
    cout << "\n generated table.........\n/***** Matrix one *****/\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << first[i][j] << " ";
        }
        cout << endl;
    }
    cout << "/****** matrix two******/\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << second[i][j] << " ";
        }
        cout << endl;
    }
    cout << "\n The result matrix is: \n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            res_mat[i][j] = first[i][j] + second[i][j];
            cout << res_mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
