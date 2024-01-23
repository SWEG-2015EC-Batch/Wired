#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int n;
    cout << "How many person?";
    cin>> n;
    double balance[n][3];
    double *ptrbalance = &balance[0][0];
    for(int i=0;i<n;i++){
        cout << "Enter Weigth: ";
        cin >> *(ptrbalance + 3*i);
        cout << "Enter Heigth: ";
        cin >> *(ptrbalance + 3*i + 1);
        *(ptrbalance + 3*i + 2) = *(ptrbalance + 3*i) /(*(ptrbalance + 3*i + 1)**(ptrbalance + 3*i + 1));
    }
    for(int i=0;i<n;i++){
        cout << i+1<<setw(15)<<*(ptrbalance + 3*i + 2)<<endl;
    }return 0;
}
