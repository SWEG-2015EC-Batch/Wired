#include <iostream>
using namespace std;
int main(){
    int side,i(1),j(1),k(1),space(0), spacecheker=1;
    cout<< "This program produce inverted full pyramid.\nEnter the side: ";
    cin >> side;
    j=side;
  //loop for a row
    while(side >= i){
      // adding space
        while(space>=spacecheker){
            cout<< "  ";// two unit of space
            spacecheker++;
        }
        space++;
        spacecheker=1;
      // adding star row
        while(j>=k){
            cout<<"*   ";// star and three unit of space
            k++;
        }
        k=1;
        cout<<endl; //new line
        j--;
        i++;
    }
}
