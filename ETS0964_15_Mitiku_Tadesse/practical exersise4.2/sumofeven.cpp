#include <iostream>
using namespace std;
int main(){
    const int row=3;
    const int col=4;

    int number[row][col];
    int even;
    int sum=0;
    cout<<" enters the number :";
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>number[i][j];
        }
    }
       for(int i=0; i<row; i++){
          for(int j=0; j<col; j++){
            if(number[i][j]%2==0){
                cout<<number[i][j]<<" ";
               
               sum+=number[i][j];
            }else{
                cout<<"* "<<" ";
            }
           
          }
       cout<<endl;
       }
       cout<<"the sum of the even array elements is :"<<sum;



       return 0;
}