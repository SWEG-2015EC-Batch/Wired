//calclating the BMI of the person 
#include <iostream>
using namespace std;

int main() {
    float weight, height;
    cout << "enter  your weight:";
    cin >> weight;
    cout << "enter your height:";
    cin >> height;
    float BMI = weight/(height*height);
    cout<< "the BMI of your body is:" << BMI<< endl;



    return 0;
;}
