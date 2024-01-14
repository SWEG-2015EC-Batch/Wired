#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;
int main(){
    char Tvshow1[] = "freinds";
    char Tvshow2[20];
   char copystring[] ="How I met your mother";
    strcpy(Tvshow2,copystring);
    cout << "tv show I like most are\n"<< Tvshow1 << endl << Tvshow2;
}