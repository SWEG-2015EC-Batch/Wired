#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;
int main(){
cout << "Enter the number of student: ";
int n;
cin>>n;
int score[n];
string scoreStatus[n];
for(int i=0;i<n;i++){
    cout << "enter the score of student "<<i+1<<" : ";
    cin >> score[i]; 
}
for(int i=0;i<n;i++){
if(score[i]>=80)
scoreStatus[i] = "Excellent";
else if(score[i]>=60) 
scoreStatus[i] = "Very good";
else if(score[i]>=50) 
scoreStatus[i] = "Fair";
else if(score[i]>=40) 
scoreStatus[i] = "Poor";
else
scoreStatus[i] = "Fail";
                    }
cout << setw(5)<<"stud-number"<<setw(15)<< "Status "<<endl;
for(int i=0;i<n;i++){
cout << setw(5)<<"student-"<<i+1<<setw(15)<< scoreStatus[i]<<endl;
}
}