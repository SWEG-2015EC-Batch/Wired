#include<iostream>
using namespace std;
int main() {
    double NUM1,NUM2,result;
    char operation;
    

    cout<<"enter the first number: ";
    cin>>NUM1;
   do { 
    cout<<"enter the opereation you would like to perfrom:";
    cin>>operation;
 if (operation == '0') {
            cout << "Exiting the program. \n" ;
            cout<<"your result is: "<<result<<endl;
            break; // exit the loop
        }
    cout<<"enter the second number:";
    cin>>NUM2;
    
    switch (operation) {
        case '+':
            result =NUM1+NUM2;
            break;
        case '-':
            result = NUM1 - NUM2;
            break;
        case '*':
            result = NUM1 * NUM2;
            break;
        case '/':
            
            if (NUM2 != 0) {
                result = NUM1 / NUM2;
            } else {
                cout << "Error: Division by zero is undefined \n" ;
                return 1; 
            }
            break;
        default:
            cout << "Error: Invalid operator. \n" ;
            return 1;
    } 
             cout << "Result: " << result << endl;
             NUM1=result;
    }while (operation!='0');
    return 0;}


