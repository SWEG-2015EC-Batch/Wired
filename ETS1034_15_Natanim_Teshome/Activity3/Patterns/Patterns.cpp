// capital letter rectangle
#include <iostream>
using namespace std;
int main(){
    int colomn,row;
    cout<< "enter the row: ";
    cin >> row;
    cout << "enter the colomn: ";
    cin >> colomn;
    int k(1);
    for(int i=1; row>=i; i++){
     for(int j=1; colomn>=j; j++){
        cout << char(64+k)<< " "; //
        k++; 
     }
     cout << endl;
    }
}


// capital letter triangle

#include <iostream>
using namespace std;
int main(){
int side,j(1);
cout << "enter the side: ";
cin>> side;
for(int i=1;i<=side;i++){
    for(int k=1;k<=j;k++){
        cout << char(64+k)<< "  ";
    }
    j++;
    cout << endl;
}
}



//  full rectangle star
#include <iostream>
using namespace std;
int main(){
int row,colomn, i(1),j(1);
cout<< "This program make you rectangle with stars.\n";
cout << "enter row: ";
cin >> row;
cout << "enter colomn: ";
cin >> colomn;
// loop for more row
while(row>=i){
// looping for more colomn
    while(colomn>=j){
        cout<<"*  ";
        j++;
    }
j=1;
cout<<endl;
i++;
}
}

//full pyramid
#include <iostream>
using namespace std;
int main() {
    int side,i(1),j(1),k(1),space , spacecheker=1;
    cout<< "This program produce full pyramid.\nEnter the side: ";
    cin >> side;
    space=side;
    while(side >= i){
        while(space>=spacecheker){
            cout<< "  ";// two unit of space
            spacecheker++;
        }
        space--;
        spacecheker=1;
        while(j>=k){
            cout<<"*   ";// star and three unit of space
            k++;
        }
        k=1;
        cout<<endl; //new line
        j++;
        i++;
    }
}

// half pyramid
#include <iostream>
using namespace std;
int main(){
int side, i(1),j(1),k(1);
cout<< "This program will make half Pyramid \n";
cout << "Enter the side ";
cin >> side;
// loop for each row 
for(;side>= i;i++){
// loop for full colomn
    for(k=1;j>=k;k++){
        cout << "*  ";
        }
    cout<< endl;
    j++; // increase size of colomn
}
}


//  full rectangle star
#include <iostream>
using namespace std;
int main(){
int row,colomn, i(1),j(1);
cout<< "This program make you rectangle with stars.\n";
cout << "enter row: ";
cin >> row;
cout << "enter colomn: ";
cin >> colomn;
// loop for more row
while(row>=i){
// looping for more colomn
    while(colomn>=j){
        cout<<"*  ";
        j++;
    }
j=1;
cout<<endl;
i++;
}
}


//full pyramid
#include <iostream>
using namespace std;
int main() {
    int side,i(1),j(1),k(1),space , spacecheker=1;
    cout<< "This program produce full pyramid.\nEnter the side: ";
    cin >> side;
    space=side;
    while(side >= i){
        while(space>=spacecheker){
            cout<< "  ";// two unit of space
            spacecheker++;
        }
        space--;
        spacecheker=1;
        while(j>=k){
            cout<<"*   ";// star and three unit of space
            k++;
        }
        k=1;
        cout<<endl; //new line
        j++;
        i++;
    }
}


// half pyramid
#include <iostream>
using namespace std;
int main(){
int side, i(1),j(1),k(1);
cout<< "This program will make half Pyramid \n";
cout << "Enter the side ";
cin >> side;
// loop for each row 
for(;side>= i;i++){
// loop for full colomn
    for(k=1;j>=k;k++){
        cout << "*  ";
        }
    cout<< endl;
    j++; // increase size of colomn
}
}


// hallow full pyramid
#include <iostream>
using namespace std;
int main() {
    int side,i(1),j(1),k(1),space , spacecheker=1;
    cout<< "This program produce full pyramid.\nEnter the side: ";
    cin >> side;
    space=side;    
    while(side > i){
        while(space>=spacecheker){
            cout<< "  ";// two unit of space
            spacecheker++;
        }
        space--;
        spacecheker=1;
       cout<<"*   ";// star and three unit of space
        k++;
        while(j>k){
            cout<<"    ";//three unit of space
            k++;
        }
         if(j>1){
            cout<<"*   ";
            }
        k=1;
        cout<<endl; //to new line
        j++;
        i++;
    }
while(space>=spacecheker){
            cout<< "  ";// two unit of space
            spacecheker++;
        }
while(side>=k){
cout<<"*   ";
 k++;   
}}


// hallow inverted pyramid

#include <iostream>
using namespace std;
int main(){
int side, i(1),j,k(1);
cout<< "This program will make inverted half pyramid \n";
cout << "Enter the side ";
cin >> side;
j=side;
// row loop
while(side >= i){
// for first row
if (i==1){
for(k=1;j>=k;){
    cout << "*  ";
    k++;
    }
cout<<endl;
j--;
i++;
continue;
}
// other rows
for(k=1;j>=k;){
if(k==1 || k==j){
cout <<"*  ";
k++;
continue;
}
cout << "   ";
k++;
}}



// hallow inverted pyramid

#include <iostream>
using namespace std;
int main(){
int side, i(1),j,k(1);
cout<< "This program will make inverted half pyramid \n";
cout << "Enter the side ";
cin >> side;
j=side;
// row loop
while(side >= i){
// for first row
if (i==1){
for(k=1;j>=k;){
    cout << "*  ";
    k++;
    }
cout<<endl;
j--;
i++;
continue;
}
// other rows
for(k=1;j>=k;){
if(k==1 || k==j){
cout <<"*  ";
k++;
continue;
}
cout << "   ";
k++;
}}


// hollow star rectangle

#include <iostream>
using namespace std;
int main(){
int row,colomn, i(1),j(1);
cout<< "This program make you open rectangle with stars.\n";
cout << "enter row: ";
cin >> row;
while (row<1) {
cout << "enter valid row: ";
cin >> row;    
}
cout << "enter colomn: ";
cin >> colomn;
while(colomn < 1){
cout<< "enter valid colomn";
cin >> colomn;
}
// looping its row
while(row>=i){
if(i==1 || i == row){
while(colomn>=j){
    cout<< "*  ";
    j++;
}
 cout << endl;
 j=1;
 i++;
continue; // return to looping its row
} 
while(colomn>=j){
if(j == 1 || colomn == j){
cout<< "*  ";
j++;
continue;  
}
cout << "   ";
j++; 
}
cout<< endl;
j=1;
i++;
}}


// inverted full pyramid
#include <iostream>
using namespace std;
int main(){
    int side,i(1),j(1),k(1),space(0), spacecheker=1;
    cout<< "This program produce inverted full pyramid.\nEnter the side: ";
    cin >> side;
    j=side;
  //loop for a row
    while(side >= i){
      // adding space
        while(space>=spacecheker){
            cout<< "  ";// two unit of space
            spacecheker++;
        }
        space++;
        spacecheker=1;
      // adding star row
        while(j>=k){
            cout<<"*   ";// star and three unit of space
            k++;
        }
        k=1;
        cout<<endl; //new line
        j--;
        i++;
    }
}

//inverted half pyramid

#include <iostream>
using namespace std;
int main(){
int side, i(1),k(1);
cout<< "This program will make half Pyramid \n";
cout << "Enter the side ";
cin >> side;
int j=side; // the first biggest row
// loop for row
for(;side>= i;i++){
// loop for one full colomn
    for(k=1;j>=k;k++){
        cout << "*  ";        
    }
    cout<< endl;
    j--;// decrease the row
}    
}

// inverted half small number triangle

#include <iostream>
using namespace std;
int main(){
int side,j(1),k(1),space,spacecheker(1);
cout<<"Program to construct inverted half triangle\nside: ";
cin >> side;
space=side;
for(int i=1; i<=side;i++){
    while (space>spacecheker){
        cout <<"   ";
        spacecheker++;
    }
    spacecheker=1;
    space--;
    k=j;
    while(j>0){
        cout << j<<"  ";
        j--;
    }
    j=k+1;
    cout << endl;
}
}
//letter rectangle
#include <iostream>
#include <ctype.h>
using namespace std;
int main(){
char letter;
int row,colomn;
cout<< "Enter the raw: ";
cin>> row;
cout<< "Enter the colomn: ";
cin>> colomn;
    for(int i=1; i<=row;i++){
        for(int j=1;j<=colomn;j++){
            cout << char(96+j)<< "  ";
        }
        cout << endl;
    }
}

//number rectangle

#include <iostream>
using namespace std;
int main(){
int i,j(0);

// looping the row
for(i=1;i<=4;i++){
// looping for colomn
while (j <= 9)
    {
        cout << (i*10)+j <<" ";
        j++;
    }
    cout <<endl;
    j=0;
}
}


//small number rectangle
#include <iostream>
#include <ctype.h>
using namespace std;
int main(){
char letter;
int row,colomn;
cout<< "Enter the raw: ";
cin>> row;
cout<< "Enter the colomn: ";
cin>> colomn;
    for(int i=1; i<=row;i++){
        for(int j=1;j<=colomn;j++){
            cout << char(96+j)<< "  ";
        }
        cout << endl;
    }
}


//small number triangle
#include <iostream>
using namespace std;
int main(){
int side,j(1);
cout<< "wellcome this program makes number triangle\n";
cout << "Enter side:";
cin >> side;
for(int i = 1; i<=side; i++){
    for(int k=1; k<=j; k++){
        cout << k << "  ";
    }
    j++;
    cout << endl;
}
}

