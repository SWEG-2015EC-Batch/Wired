#include <iostream>
using namespace std;
int main() {
    cout << "welcome to calculator\n";
    float num1,num2; // the two number
    char operate;
    cout << "num 1: ";
    cin >> num1;
    cout << "operation: ";
    cin >> operate;
do {
switch (operate){
case '+': cout << "num 2: ";
        cin >> num2;
        num1 += num2;
        cout <<  "result: "<<num1;
        break;
case '-':   cout << "num 2: ";
        cin >> num2;
        num1 -= num2;
        cout <<  "result: "<<num1;
        break;
case '*': cout << "num 2: ";
        cin >> num2;
        num1 *= num2;
        cout <<  "result: "<<num1;
        break;
case '/': cout << "num 2: ";
        cin >> num2;
        num1 /= num2;
        cout <<  "result: "<<num1;
        break;
}
// looping if operator is out of four operator//
while(operate !='+' && operate !='-' && operate !='*' && operate !='/'){
cout << "enter rigth operator :";
cin >> operate;
switch (operate){
case '+': cout << "num 2: ";
        cin >> num2;
        num1 += num2;
        cout <<  "result: "<<num1;
        break;
case '-':   cout << "num 2: ";
        cin >> num2;
        num1 -= num2;
        cout <<  "result: "<<num1;
        break;
case '*': cout << "num 2: ";
        cin >> num2;
        num1 *= num2;
        cout <<  "result: "<<num1;
        break;
case '/': cout << "num 2: ";
        cin >> num2;
        num1 /= num2;
        cout <<  "result: "<<num1;
        break;
}
}
cout << "\n"<<"operator(zero to terminate): ";
    cin >> operate;
} while(operate!='0'); // zero to stop
cout << "\nresult: " << num1;
return 0;
}
