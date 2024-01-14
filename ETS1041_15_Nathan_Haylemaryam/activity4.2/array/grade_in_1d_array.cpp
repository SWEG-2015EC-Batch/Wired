#include <iostream>

using namespace std;
int main()
{
    int const size = 6;
    int mark[size];
    for (int i = 0; i < size; i++)
    {
        cout << "enter the mark:";
        cin >> mark[i];
        cout << (mark[i] >= 80 ? "Excellent" : (mark[i] >= 60 ? "Very Good" : (mark[i] >= 50 ? "Fair" : (mark[i] < 40 ? "Fail" : "")))) << " " << mark[i] << endl;
    }
}
