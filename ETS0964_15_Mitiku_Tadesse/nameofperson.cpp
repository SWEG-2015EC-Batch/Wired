#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number of persons :";
    cin>>n;
  string names[n], temp;     
  
  cout<<"Enter the names of persons  : ";
  for(int i=0; i<n; i++)
  {
    cin>>names[i];  
  }
  for( int i=0; i<n; i++)                  
  {
    for(int j=i+1; j<n; j++)
    
      if(names[i]>names[j])  {     
       names[i]=names[j];
       names[j]=temp;

      }
    }
  
  cout<<" when Names rearranged in alphabetical order : \n";
  for( int i=0; i<n; i++)
  {
    cout<<names[i]<<"\n";
  }
  return 0;
  }