#include <iostream>
using namespace std;
int main()
{
    int temp [8];
    double total=0;

    for(int i=0;i<8;i++){
        cout<<"enter number "<<i+1<<":";
        cin>>temp[i];
        total+=temp[i];
    }
        cout<<"average = "<<total/8<<endl;


    return 0;
}

