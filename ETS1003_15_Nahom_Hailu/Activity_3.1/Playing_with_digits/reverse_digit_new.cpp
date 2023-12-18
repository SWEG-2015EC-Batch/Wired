#include <iostream>
using namespace std;
int main(){
    int number, reminder, reverse(0);
    cout << "Enter the number: ";
    cin >> number;
cout<< "The reverse is ";
while(number>0){
    reminder = number% 10;
    reverse = reverse*10 + reminder;
    number /= 10;
}
cout  << reverse; 
}