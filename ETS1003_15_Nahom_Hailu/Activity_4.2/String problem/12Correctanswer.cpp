#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;
int main(){
char correct[10] = {'A','B','A','C','D','C','B','A','D','D'};
char answer[10];
int score(0);
for(int i=0;i<10;i++){
    cout << "Answer Question "<< i+1<<" : ";
    cin>>answer[i];
    answer[i] = toupper(answer[i]);
    if(answer[i]==correct[i])
    score++;
}cout << "Your answer is ";
for(int i=0;i<10;i++){
    cout << answer[i]<<setw(5);
}
cout<< "\nYour Score is "<< score;
}