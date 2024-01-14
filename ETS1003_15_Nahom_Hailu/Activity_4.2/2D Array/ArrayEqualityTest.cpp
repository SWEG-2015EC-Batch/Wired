#include <iostream>
using namespace std;
int main(){
    int size1;// size of array
    cout <<" enter the number of row of array: ";
    cin >> size1;
    int array[size1], array2[size1];
    cout << "array 1\n";
    for(int i=0;i<size1;++i){
        cout << "enter element "<<i+1<<" : ";
        cin >> array[i];
    }cout << "array 2\n";
    for(int i=0;i<size1;++i){
        cout << "enter element "<<i+1<<" : ";
        cin >> array2[i];
    }
    for(int i=0;i<size1;++i){
        if(array2[i]!=array[i]){
         cout << "\nthey are not equal";
         return 0;   
        }
    }
    cout << "\nThey are equal";
}
