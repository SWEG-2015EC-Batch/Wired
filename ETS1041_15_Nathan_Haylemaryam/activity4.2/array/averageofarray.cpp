#include <iostream>
using namespace std;
int main()
{
    int const size = 8;
    int temp[size];
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        cout << "enter the number:";
        cin >> temp[i];
        
    }
    for (int i = 0; i < size; i++)
    {
        cout << temp[i] << " ";
        
    }
    for (int i = 0; i < size; i++)
    {
     sum=sum+temp[i];
    }
    int avarage =sum/size;
    cout << endl;
    cout <<"the average of the numbers entered is"<< avarage;

    return 0;
}
