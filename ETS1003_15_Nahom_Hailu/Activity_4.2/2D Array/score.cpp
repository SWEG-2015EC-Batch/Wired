#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int score[6]{0};
cout << "Enter the test(15): ";
cin >> score[0];
score[5] += score[0];
cout << endl<<"Enter the assignment(10): ";
cin >> score[1];
score[5] += score[1];
cout << endl<<"Enter the quiz(5): ";
cin >> score[2];
score[5] += score[2];
cout << endl<<"Enter the project(20): ";
cin >> score[3];
score[5] += score[3];
cout << endl<<"Enter the final(50): ";
cin >> score[4];
score[5] += score[4];
string scoreStatus;
if(score[5]>=80)
scoreStatus = "Excellent";
else if(score[5]>=60) 
scoreStatus = "Very good";
else if(score[5]>=50) 
scoreStatus = "Fair";
else if(score[5]>=40) 
scoreStatus = "Poor";
else
scoreStatus = "Fail";
cout<<"test"<<setw(10)<<"assignment"<<setw(10)<<"quiz"<<"project"<<setw(10)<<"final"<<setw(10)<<"total"<<setw(10)<<"status"<<endl;
for(int i=0;i<6;i++){
cout << score[i]<<setw(10);  
}
cout << scoreStatus;
}