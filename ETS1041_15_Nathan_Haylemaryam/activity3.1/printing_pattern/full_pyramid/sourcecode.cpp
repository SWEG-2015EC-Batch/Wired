#include <iostream>
using namespace std;
int main() {
    int side,i(1),j(1),k(1),space , spacecheker=1;
    cout<< "This program produce full pyramid.\nEnter the side: ";
    cin >> side;
    space=side;
    while(side >= i){
        while(space>=spacecheker){
            cout<< "  ";// two unit of space
            spacecheker++;
        }
        space--;
        spacecheker=1;
        while(j>=k){
            cout<<"*   ";// star and three unit of space
            k++;
        }
        k=1;
        cout<<endl; //new line
        j++;
        i++;
    }
}
