#include <iostream>
using namespace std;
int main(){
    int colomn,row;
    cout<< "enter the row: ";
    cin >> row;
    cout << "enter the colomn: ";
    cin >> colomn;
    int k(1);
    for(int i=1; row>=i; i++){
     for(int j=1; colomn>=j; j++){
        cout << char(64+k)<< " "; //
        k++; 
     }
     cout << endl;
    }
}
