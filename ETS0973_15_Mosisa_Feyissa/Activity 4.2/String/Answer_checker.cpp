//Design a program that store an answer sheet for a test containing 10 multiple choice questions. 
//The program should accept the student answer, and print the test score along with the marked student answer.

#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char correct[10]={'A','B','C','D','E','A','B','C','D','E'};
    char trytest[10];
    int counter = 0;
    for(int i=0;i<10;i++){
        cout<<"Answer for question "<<i+1<<": ";
        cin>>trytest[i];
    }
    for(int i=0;i<10;i++){
        if (toupper(trytest[i])==correct[i]){
            counter++;
        }
    }

    cout<<"\nYour score for this test is: "<<counter;

    return 0;
}