#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;
int main(){
    cout << "Enter the number of list: ";
    int n;
    cin >> n;
    int number[n];
    int even[n]{0};
    for(int i=0;i<n;i++){
        cout << "enter number "<< i+1<<" : ";
        cin >> number[i];
        if( number[i]%2==0){
            even[i]=number[i];
        }
        }
        cout <<endl;
        for(int j=n-1;j>=0;j--){
            if(even[j]!=0)
            cout <<setw(5)<<even[j];
        }    
}