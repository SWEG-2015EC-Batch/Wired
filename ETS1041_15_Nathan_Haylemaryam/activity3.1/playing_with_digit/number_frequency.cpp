#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int num; 
    cout << "enter the number: ";
    cin >> num; 
    int frequency[10] = {0}; // there is only 10 digits available
    while (num > 0) {
    frequency[num % 10]++; // adding each frequncy
    num /= 10;
    }
    cout <<setw(3)<< "Digit"<<setw(10)<< "Frequency" << endl;
    for (int i = 0; i < 10; ++i) {
        if (frequency[i] > 0) {
        cout<<setw(3) << i << setw(10)<< frequency[i] << endl;
        }
    }  
} 
