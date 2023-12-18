#include <iostream>
using namespace std;
int main(){
int grade(0);
int test, quiz, project, assignment , Final_exam;
do{
if (grade != 0){
    cout << "invalid grade"<< endl;
}
cout << "Enter the test score(out of 15): ";
cin>> test;
cout << "Enter the quiz score(out of 5): ";
cin>> quiz;
cout << "Enter the project score(out of 20): ";
cin>> project;
cout << "Enter the assignment score(out of 10): ";
cin>> assignment;
cout << "Enter the Final score(out of 50): ";
cin>> Final_exam;
grade = test + quiz + project + assignment + Final_exam; 
cout << "your grade is" << grade;
if(grade<100 && grade >0){
  if(grade>=90){
    cout << "grade: A+";
        }else if(grade>=80){
        cout << "grade: A";
            }else if(grade>=75){
             cout << "grade: B+";
                 }else if(grade>=60){
                  cout << "grade: B";
                     }else if(grade>=55){
                        cout << "grade: C+";
                             }else if(grade>=45){
                                 cout << "grade: C";
                                     }else  if(grade>=30){
                                         cout << "grade: D";
                                             }else{
                                                cout << "grade: F";
                                                     }
                                                        }
cout << endl;
}while(grade > 100 || grade < 0);
}
