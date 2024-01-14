//Question number one

#include <iostream>
using namespace std;
int main(){
    int size1;// size of array
    cout <<" enter the number of row of array: ";
    cin >> size1;
    int array[size1], array2[size1];
    cout << "array 1\n";
    for(int i=0;i<size1;++i){
        cout << "enter element "<<i+1<<" : ";
        cin >> array[i];
    }cout << "array 2\n";
    for(int i=0;i<size1;++i){
        cout << "enter element "<<i+1<<" : ";
        cin >> array2[i];
    }
    for(int i=0;i<size1;++i){
        if(array2[i]!=array[i]){
         cout << "\nthey are not equal";
         return 0;   
        }
    }
    cout << "\nThey are equal";
}


//Question Number two
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
int number[3][4];
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout << "enter row-"<<i+1<<" col-"<<j+1<<": ";
            cin >> number[i][j];
        }
    }
    for(int i=0;i<3;i++){ 
    cout << endl;     
        for(int j=0;j<4;j++){
            if(number[i][j]%2 == 0)
            cout<< setw(5) << number[i][j];
            else 
            cout <<setw(5)<< "*";
            }            
        }
}


//Question Number Four
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
int size1,size2;// size of array
cout <<" enter the number of row of array: ";
cin >> size1;
cout <<" enter the number of colomn of array: ";
cin >> size2;
int number[size1][size2];
int productRow[size1],sumColomn[size2]{0};
cout << "Enter the element"<<endl;
    for(int i=0;i<size1;i++){
        productRow[i]=1;
        for(int j=0;j<size2;j++){         
            cout << "enter row-"<<i+1<<" col-"<<j+1<<": ";
            cin >> number[i][j];
            cout << endl;
            productRow[i] *= number[i][j];
            sumColomn[j] += number[i][j]; 
        }
    }
cout << "row" <<setw(10)<< "product"<< endl;
for (int i=0;i<size1;++i){
cout << i+1 <<setw(10)<< productRow[i]<< endl;    
}
cout << "colomn" <<setw(10)<< "sum"<< endl;
for (int i=0;i<size2;++i){
cout << i+1 <<setw(10)<< sumColomn[i]<< endl;    
}
}

//Question Number Five

#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int score[6]{0};
cout << "Enter the test(15): ";
cin >> score[0];
score[5] += score[0];
cout << endl<<"Enter the assignment(10): ";
cin >> score[1];
score[5] += score[1];
cout << endl<<"Enter the quiz(5): ";
cin >> score[2];
score[5] += score[2];
cout << endl<<"Enter the project(20): ";
cin >> score[3];
score[5] += score[3];
cout << endl<<"Enter the final(50): ";
cin >> score[4];
score[5] += score[4];
string scoreStatus;
if(score[5]>=80)
scoreStatus = "Excellent";
else if(score[5]>=60) 
scoreStatus = "Very good";
else if(score[5]>=50) 
scoreStatus = "Fair";
else if(score[5]>=40) 
scoreStatus = "Poor";
else
scoreStatus = "Fail";
cout<<"test"<<setw(10)<<"assignment"<<setw(10)<<"quiz"<<"project"<<setw(10)<<"final"<<setw(10)<<"total"<<setw(10)<<"status"<<endl;
for(int i=0;i<6;i++){
cout << score[i]<<setw(10);  
}
cout << scoreStatus;
}

