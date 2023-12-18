#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int number, divisorSum(0),maxdivisor;
    cout << "enter the number: ";
    cin >> number;
    for(int divisor=1;divisor<=number;divisor++){
        if(number % divisor == 0){
            divisorSum += divisor;
        }
    }
    if(number == divisorSum - number){
        cout << "It is perfect";
    }else{
        cout << "It is not perfect";
    }
}
