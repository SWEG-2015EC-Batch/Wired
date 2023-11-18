// calculate BMI
#include <iostream>

using namespace std;

int main()
{
  // declaring variable
    float weight;
    float height;
  //promote user to enter weight
    cout <<"please enter weight"<< endl;
    cin>>weight;
  // promot user to enter height
    cout <<"please enter Height"<< endl;
    cin>>height;
    float BMI=weight/(height*height);
  //print BMI
    cout<<"the BMI is"<<BMI<< endl;

	   return 0;
}
