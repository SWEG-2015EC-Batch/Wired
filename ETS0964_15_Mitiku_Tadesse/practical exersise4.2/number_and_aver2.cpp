// aprogram that display anumber and average
#include <iostream>
using namespace std;
int main(){
    const int n=8;
    int number[n];
    int total =0;
    int avg;
    cout<<"enter the number please: ";
for(int i=0; i<n; i++){
    cin>>number[i];
    total+=number[i];
    cout<<number[i]<<" ";
}

cout<<"the total of the row is "<<total<<endl;
avg=total/8;

cout<<"the average  of the number is :"<<avg;




return 0;

}