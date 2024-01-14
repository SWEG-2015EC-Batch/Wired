


#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;
int main(){
    int size1,size2;
    cout << "Enter the row: ";
    cin >> size1;
    cout << "Enter the colomn: ";
    cin >> size2;
    int first [size1][size2], second[size1][size2];
    cout << "enter the first matrix"<<endl;
    for(int i=0;i<size1;i++){
        for(int j=0;j<size2;j++){
            cout<< "enter row-"<<i+1<<" col-"<<j+1<<" : ";
            cin >> first[i][j];
        }
    }
    cout << "enter the second matrix"<<endl;
    for(int i=0;i<size1;i++){
        for(int j=0;j<size2;j++){
            cout<< "enter row-"<<i+1<<" col-"<<j+1<<" : ";
            cin >> second[i][j];
        }
    }
    cout << "Sum of the arrays"<<endl;
    int sumArray[size1][size2]{0};
    for(int i=0;i<size1;i++){
        for(int j=0;j<size2;j++){
            sumArray[i][j]=first[i][j]+second[i][j];
            cout <<setw(10)<<sumArray[i][j];
        }
        cout << endl;
    }    
}
