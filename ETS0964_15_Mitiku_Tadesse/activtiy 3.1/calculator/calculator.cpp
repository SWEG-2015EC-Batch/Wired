#include <iostream>
using namespace std;
int main(){
  char operation;
  int num1,num2,result;
  do{
  cout<<"please, enter your choice :"<<endl;
  cout<<"1.addition(+) "<<endl;
  cout<<"2.subtraction(-) "<<endl;
  cout<<"3.multiplication(*) "<<endl;
  cout<<"4.division(/) "<<endl;
  cout<<"-1.exit "<<endl;
  cout<<"please enter the operator :";
  cin>>operation;
  if(operation=='0'){
    break;
  }
  cout<<"enter num1 :";
  cin>>num1;
  cout<<"enter num2 :";
  cin>>num2;
  switch(operation){
case '+':
    result=num2+num2;
    cout<<"the result is :"<<result<<endl;
    break;
case '-':
    result=num1-num2;
    cout<<"the result is "<<result<<endl;
    break;
case '*':
    result=num1*num2;
    cout<<"the result is :"<<result<<endl;
    break;
case '/':
    if(num2!=0){
        result=num1/num2;
        cout<<"the result is :"<<result<<endl;  
    }
  else {
    cout<<"division by zero is not defined :"<<endl;

  }
      break;
default:
cout<<"wrong choice,please try again ";

  }
  
  }while(1);
  cout<<"the calculator is exiting good bye "<<endl;


return 0;
} 