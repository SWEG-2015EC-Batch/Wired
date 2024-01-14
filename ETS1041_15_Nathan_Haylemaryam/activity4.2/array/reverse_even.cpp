#include <iostream>

using namespace std;
int main()
{
    int const size=10;
    int num[size];
    
    
    for (int  i = 0; i < size; i++)
    {
        cout<<"enter a number: ";
        cin>>num[i];

    }
    for (int  i = size-1; i >= 0; i--)
    {
        if(num[i]%2==0){
            cout<<num[i]<<" ";
        }
    }
    
    

}
