#include <iostream>
using namespace std;
int main(){
int side,j(1);
cout<< "wellcome this program makes number triangle\n";
cout << "Enter side:";
cin >> side;
for(int i = 1; i<=side; i++){
    for(int k=1; k<=j; k++){
        cout << k << "  ";
    }
    j++;
    cout << endl;
}
}
