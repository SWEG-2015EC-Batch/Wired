//Write a C++ program that read and adds equivalent elements of the two-dimensional arrays named first and second. 
//The program should print the resulting data elements in table form.

#include<iostream>
using namespace std;

int main(){
    int r=3, c=4;
    float First[r][c]={0.0}, Second[r][c]={0.0}, Result[r][c]={0.0};

    cout<<"Please enter values of 'First' for: "<<endl;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
        cout<<"Raw "<<i<<" and Column "<<j<<": ";
        cin>>First[i][j];
    }}
    cout<<endl;

    cout<<"Please enter values of 'Second' for: "<<endl;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
        cout<<"Raw "<<i<<" and Column "<<j<<": ";
        cin>>Second[i][j];
    }}
    cout<<endl;

    cout<<"The resuting data elements is: "<<endl;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            Result[i][j]=First[i][j]+Second[i][j];
            cout<<Result[i][j]<<"\t";
        }
        cout<<"\t"<<endl;
}

return 0;
}