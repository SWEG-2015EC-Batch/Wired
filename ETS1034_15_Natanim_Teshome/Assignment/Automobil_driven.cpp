  //the number miles automobil can be driven without refueling
#include <iostream>
using namespace std;
int main(){
  //declearing variables
   int fuleTank;
   int milePerGallons;
  //promots the user to enter capacity of fule tank
   cout<<"Please Enter the capacity of fule tank in gallons" <<endl;
   cin>>fuleTank;
  //promots the user to enter mile
   cout<<"Please Enter the mile per gallon the automobile can be driven" <<endl;
   cin>>milePerGallons;
   cout<<"Automobile can be driven without refuiling"  << fuleTank * milePerGallons <<endl;
    return 0;
}

