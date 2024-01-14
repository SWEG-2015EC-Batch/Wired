// identical element
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of the number :";
    cin>>n;
    int first[n];
    int  secound[n];
    bool identical=true;
    
    cout<<"enter the first number ";
    for(int i=0; i<n; i++){
        cin>>first[i];

    }
    cout<<"enter the secound number ";
    for(int i=0; i<n; i++){
   cin>>secound[i];
    }
    for(int i=0; i<n; i++){
        if(first[i]==secound[i]){
        bool identical=true;


        }else{
          identical=false;
        }
    }
    if(identical){
        cout<<"the two arrays are the same element ";

    }else{
        cout<<"the two arrays are not the same elements ";
    }
    return 0;

}