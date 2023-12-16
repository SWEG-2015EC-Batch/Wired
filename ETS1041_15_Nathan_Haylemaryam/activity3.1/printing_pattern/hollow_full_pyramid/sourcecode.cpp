#include <iostream>
using namespace std;
int main() {
    int side,i(1),j(1),k(1),space , spacecheker=1;
    cout<< "This program produce full pyramid.\nEnter the side: ";
    cin >> side;
    space=side;    
    while(side > i){
        while(space>=spacecheker){
            cout<< "  ";// two unit of space
            spacecheker++;
        }
        space--;
        spacecheker=1;
       cout<<"*   ";// star and three unit of space
        k++;
        while(j>k){
            cout<<"    ";//three unit of space
            k++;
        }
         if(j>1){
            cout<<"*   ";
            }
        k=1;
        cout<<endl; //to new line
        j++;
        i++;
    }
while(space>=spacecheker){
            cout<< "  ";// two unit of space
            spacecheker++;
        }
while(side>=k){
cout<<"*   ";
 k++;   
}
}
