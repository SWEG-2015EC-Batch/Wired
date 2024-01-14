#include <iostream>

using namespace std;
int main()
{
    int const size = 5;
    int array1[size];
    int array2[size];
    for (int i = 0; i < size; i++)
    {
        cout << "enter the elements for array 1: ";
        cin >> array1[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout << "enter the elements for array2 : ";
        cin >> array2[i];
    }
   bool identical=true;
   for (int i = 0; i < size; i++)
   {
    if (array1!=array2)
    {
        identical=false;
        break;
    }
    
   }
   if (identical==true)
   {
    cout<<"the two arrays are identical";
   }
   else {
    cout<<"the two array are not identical";
   }
   
}
