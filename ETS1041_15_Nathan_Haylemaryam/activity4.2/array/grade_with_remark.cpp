#include <iostream>

using namespace std;
int main()
{
    int const size=10;
    int test[size],assignment[size],quiz[size],project[size],final[size];
    int num;
    cout<<"enter the number of students:";
    cin>>num;
    for (int i = 0; i < num; i++)
    {
        cout<<"enter test score(10): ";
        cin>>test[i];
        cout<<"enter assignment score:(20) ";
        cin>>assignment[i];
        cout<<"enter quiz score(5): ";
        cin>>quiz[i];
        cout<<"enter project score(15): ";
        cin>>project[i];
        cout<<"enter fina; score(50): ";
        cin>>final[i];

    }
    int total[num];
    for (int i = 0; i < num; i++)
    {
        total[i]=test[i]+assignment[i]+quiz[i]+project[i]+final[i];
        cout << (total[i] >= 80 ? "Excellent" : (total[i] >= 60 ? "Very Good" : (total[i] >= 50 ? "Fair" : (total[i] < 40 ? "Fail" : "")))) << " " << total[i] << endl;

    }

    
    
}
