#include <iostream>
using namespace std;
int main(){
    int number, reminder, reverse(0);
    cout << "Enter the number: ";
    cin >> number;
    int tocheck = number;
cout<< "The reverse is ";
while(number>0){
    reminder = number% 10;
    reverse = reverse*10 + reminder;
    number /= 10;
}
if(reverse == tocheck){
    cout << "it is palindrome";
}
else{
    cout << "It is not palindrome";
}
}
