#include <iostream>

using namespace std;
int main()
{
    int const size = 9;

    double volts[size] = {11.95, 16.32, 12.15, 8.22, 15.98,
                          26.22, 13.54, 6.45, 17.59};

    for (int j = 0; j < size; j++)
    {
        cout << volts[j] << " ";
        if ((j + 1) % 3 == 0)
        {
            cout << endl;
        }
    }
}
