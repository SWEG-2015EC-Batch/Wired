// a program that display a number 
#include <iostream>
using namespace std;
int main(){
    const int row=4;
    const int column=5;
    int number[row][column]={{16,22,99,4,18},{-258,4,101,5,98},{105, 6, 15, 2, 45},{33,88,72,16,3}};

       for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            cout<<number[i][j]<<" ";

        }
        cout<<endl;

       }



return 0;

}