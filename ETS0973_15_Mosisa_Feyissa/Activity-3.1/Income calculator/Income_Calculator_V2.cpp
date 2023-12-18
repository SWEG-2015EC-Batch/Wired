/*A program that will read in the number of hours worked in a week and the number of dependents as input and
will then output the worker’s gross pay, each withholding amount, and the net take-home pay
for the week as per the users's choice.
*/

#include<iostream>
using namespace std;

int main(){
    float work_Hour, gross_Salary, netPay1, with_Hold, dependant, socialSec, fedTax,stateTax,overTime_pay, overTime; 
    //since the An employee is paid at a rate of $16.78 per hour, $10 per week is withheld for union and 
    //$35 is withheld to cover the extra cost of health insurance if the employee has three or more dependents
    const float hourly_Pay=16.78,Health_insu=35,Union=10;

    cout<<"Please enter how much hours did the employee worked this week?: ";
    cin>>work_Hour;
    cout<<"Please enter how much dependants do you have?: ";
    cin>>dependant;
    
    if (work_Hour<=40){
        gross_Salary=hourly_Pay*work_Hour;
        socialSec=0.06*gross_Salary;
        fedTax=0.14*gross_Salary;
        stateTax=0.05*gross_Salary;

        if (dependant<3){
            netPay1=(gross_Salary)-(socialSec+fedTax+stateTax+Union);
        }else if (dependant>=3){
            netPay1=(gross_Salary)-(socialSec+fedTax+stateTax+Union+Health_insu);
        }else{
            cout<<"Please enter valid number of dependants";
        }
        }else if(work_Hour>40){
            overTime=work_Hour-40;
            overTime_pay=25.17*overTime;
            gross_Salary=671.2+overTime_pay;
            socialSec=0.06*gross_Salary;
            fedTax=0.14*gross_Salary;
            stateTax=0.05*gross_Salary;

            if (dependant<3){
            netPay1=(gross_Salary)-(socialSec+fedTax+stateTax+Union);
            }else if (dependant>=3){
            netPay1=(gross_Salary)-(socialSec+fedTax+stateTax+Union+Health_insu);
            }else{
            cout<<"Please enter valid number of dependants";
        }
        }else{
            cout<<"Please enter an appropriate time you had worked this week ";
        }
char A,B,C,D,choise;
    cout<<"Which data you want to get?: "<<endl;
    cout<<"  Type 'A' for Gross payment "<<endl;
    cout<<"  Type 'B' for the withholding amounts "<<endl;
    cout<<"  Type 'C' for the Net take-home payment  "<<endl;
    cout<<"  Type 'D' for the All data "<<endl;
    cin>>choise;

    if (choise=='A'){
        cout<<"The gross salary: $"<<gross_Salary;
        }else if (choise=='B'){
            cout<<"    The withholding amounts are: "<<endl;
            cout<<"    For social security: $"<<socialSec<<endl;
            cout<<"    For Federal income tax: $"<<fedTax<<endl;
            cout<<"    For Union due: $"<<Union<<endl;
            cout<<"    For health insurance: $"<<Health_insu<<endl;
        }else if(choise=='C'){
            cout<<"    The net take-home payment: $"<<netPay1<<endl;
        }else if(choise=='D'){
            cout<<"    The gross salary: $"<<gross_Salary<<endl;
            cout<<"    The withholding amounts are: "<<endl;
            cout<<"    For social security: $"<<socialSec<<endl;
            cout<<"    For Federal income tax: $"<<fedTax<<endl;
            cout<<"    For Union due: $"<<Union<<endl;
            cout<<"    For health insurance: $"<<Health_insu<<endl;
            cout<<"    The net take-home payment: $"<<netPay1<<endl;
        }else{
            cout<<"Enter a valid choice(A/B/C/D)";
        }
    
return 0;
}

