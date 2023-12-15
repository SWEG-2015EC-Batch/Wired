//to print out the numbers 10 through 49 in a certain manner
#include <iostream>
using namespace std;
int main(){
int i,j(0);
// looping the row
for(i=1;i<=4;i++){
// looping for colomn
while (j <= 9)
    {
        cout << (i*10)+j <<" ";
        j++;
    }
    cout <<endl;
    j=0;
}
}
