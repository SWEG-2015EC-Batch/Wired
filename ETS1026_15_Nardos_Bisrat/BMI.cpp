//calculate the BMI
#include <iostream>

using namespace std;

int main()
{
    float weight;
    float height;
    cout <<"please enter weight"<< endl;
    cin>>weight;
    cout <<"please enter Height"<< endl;
    cin>>height;
    float BMI=weight/(height*height);
    cout<<"the BMI is"<<BMI<< endl;

	   return 0;
}

