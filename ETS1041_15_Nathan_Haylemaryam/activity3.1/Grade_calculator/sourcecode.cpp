#include <iostream>
using namespace std;
int main(){
    int grade, gradeInteger;
cout << "Enter the grade: ";
cin >> grade;
while(grade>100 || grade<0){
cout << "Enter the valid grade\n";
cin >> grade;  
}
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
}
