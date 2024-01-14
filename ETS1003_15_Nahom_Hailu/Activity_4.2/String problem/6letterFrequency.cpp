#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;
int main(){
    string name;
    int count[52]{0}; // Since there are 52 charcter
    cout << "enter the string(work) : ";
    getline(cin,name);
    for(int i=0;i<name.size();i++){
    if(isalpha(name[i])==false) continue;
    if(int(name[i])<=90){
        count[int(name[i])-65]++;
    }else{ count[int(name[i])-71]++;
    }
    }
    int max = 1, min = 1;
    int maxcount,mincount;
    for(int i=1;i<51;i++){
    if(count[i]>0){
        if(count[i]>max)
         maxcount = i;  
        if(count[i]<=min)
         mincount = i;
    }
    }
            if(maxcount > 25&&count[maxcount]>0){
                cout << char(maxcount+71)<<setw(10)<<count[maxcount]<<endl;
            }else if(count[maxcount]>0)
             cout << char(maxcount+65)<<setw(10)<<count[maxcount]<<endl;
             if(mincount > 25 && count[mincount]>0){
                cout << char(mincount+71)<<setw(10)<<count[mincount]<<endl;
            }else if(count[mincount]>0)
             cout << char(mincount+65)<<setw(10)<<count[mincount]<<endl;
}