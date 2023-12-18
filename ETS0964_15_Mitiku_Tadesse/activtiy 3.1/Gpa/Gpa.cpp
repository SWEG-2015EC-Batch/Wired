#include <iostream>
using namespace std;
int main(){
    double test,quize,project,assighment,final;
     double total_mark;
    
    cout<<"enter the test(out of 20) :";
    cin>>test;
    cout<<"enter the quize (out of 5):";
    cin>>quize;
    cout<<"enter the project (out of 10):";
    cin>>project;
    cout<<"enter the assighment(out of 15) :";
    cin>>assighment;
    cout<<"enter the final exam (out of 50): "<<endl;
    cin>>final;
    
 total_mark =test + quize + project + assighment + final ;
   cout<<"the total mark is :"<<total_mark<<endl;

    if(total_mark>=90){
        cout<<"A+";
    
    }
    else if(total_mark<90){
        cout<<"A";

    }
     
      else if(total_mark<80 && total_mark>= 75){
        cout<<"B+";
      }
       else if(total_mark<75 && total_mark<=60){
          cout<<"B";

       } 
       else if(total_mark<60 && total_mark>=55){
        cout<<"C+";

       }
        else if(total_mark<55 && total_mark>=45){
            cout<<"C";

        }
        else if(total_mark<45 && total_mark>=30){
            cout<<"D";

        } 
         else{
            cout<<"F";
         }


         return 0;

} 