//Question Number One
#include <iostream>
#include <string.h>
using namespace std;
int main(){
    string name;
    int vowel(0),consonant(0);
    cout << "enter the name : ";
    getline(cin,name);
    for(int i=0;i<name.size();++i){
        if(isalpha(name[i])){
        if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u'||name[i]=='A'||name[i]=='E'||name[i]=='I'||name[i]=='O'||name[i]=='U')
        vowel++;
        else
        consonant++;
        }
    }
    cout <<endl<< "vowel: "<< vowel<<" consonant: "<< consonant;
}



//Question Number Two
#include <iostream>
#include <string.h>
using namespace std;
int main(){
string name;
cout << "enter the name : ";
getline(cin,name);
int size = name.size();
for(int i=0;i<size;i++){
    if(name[i]!=name[size-i-1]){
    cout << "not palindrome";
    return 0;
    }
}
cout << "\nIt is palindrome";
}


//Question Number Three
#include <iostream>
#include <string.h>
using namespace std;
int main(){
    string name;
    cout << "enter the string : ";
    getline(cin,name);  
    for(int i=0;i<name.size();i++){
        if(isalpha(name[i])==false){
        name[i]='\0';
        }
    } 
    cout <<endl<< name;
}


//Question Number Four
#include <iostream>
#include <string.h>
using namespace std;
int main(){
    string name;
    string token[20]; // Assume it is have atmost 20 token  
    cout << "enter the string : ";
    getline(cin,name);
    int j(0);
    for(int i=0;i<name.size();i++){
        if(name[i]==' '){
            j++;
            continue;
        }
        token[j]+=name[i];
    }
    cout<<"[";
    for(int i=0;i<j;i++){
        cout<<"\""<<token[i]<<"\""<<",";
        if(i==j-1)
         cout<<"\""<<token[i+1]<<"\"";
    } cout<<"]";
}


//Question Number Five
#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;
int main(){
    string name; 
    cout << "enter the string : ";
    int vowel(0),consonant(0),digit(0),specialcharacter(0);
    getline(cin,name);
    for(int i=0;i<name.size();i++){
        if(name[i]==' ') continue;
        if(isalpha(name[i])){
            if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u'||name[i]=='A'||name[i]=='E'||name[i]=='I'||name[i]=='O'||name[i]=='U')
        vowel++;
        else
        consonant++;
        }
    else if(isdigit(name[i]))
    digit++;
    else specialcharacter++;
    }
    cout<<"vowel"<<setw(10)<<"consonant"<<setw(10)<<"digit"<<setw(10)<<"special"<<endl;
    cout<<vowel<<setw(10)<<consonant<<setw(10)<<digit<<setw(10)<<specialcharacter<<endl;
}

//Question Number Six
#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;
int main(){
    string name;
    int count[52]{0}; // Since there are 52 charcter
    cout << "enter the string(work for alphanumeric) : ";
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
    for(int i=0;i<52;i++){
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


//Question Number Seven
#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;
int main(){
    cout << "how much person do you have: ";
    int n;
    cin >> n;
    string name[n];
    for(int i=0;i<n;i++){
    cout << "enter the name of person "<<i+1<<" : ";
    cin >> name[i];
    for(int k = 0;k<name[i].size();k++){
        name[i][k] = tolower(name[i][k]); // change all to small not to make biased
    }
    }
    for(int i=1;i<n;i++){    
        // comparing the element with proir elements
        for(int j=0;j<i;j++){       
            int k=0;
            // finding unequal character
            while(name[j][k]==name[i][k] && k<=name[j].size() && k<=name[i].size()){
            k++;
            }
            if(name[j][k]>name[i][k]){
                string swap;
                swap = name[j];
                 name[j] = name[i];
                 name[i] = swap;
            }
}
}
for(int i=0;i<n;i++){
        name[i][0] = toupper(name[i][0]);
        cout << name[i]<<"   ";
        }
}


//Question Number Eight
#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;
int main(){
        string name; 
    cout << "enter the string : ";
    getline(cin,name);
    for(int i=0;i<name.size();i++){
        if(isalpha(name[i])==false) continue;
        name[i]=toupper(name[i]);
    }
    cout << "All CAPITAL: "<<name;
    for(int i=0;i<name.size();i++){
        if(isalpha(name[i])==false) continue;
        name[i]=tolower(name[i]);
    }
    cout << "\nall small: "<<name;
}


//Question Number Nine
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

//Question Number Ten
#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;
int main(){
    string password = "agag4576";
    string trial;
    cout << "enter passwod: ";
    cin>> setw(8)>> trial;
    for(int i=0;i<8;i++){
        if(trial[i]!=password[i]){
        cout << "Wrong password";
        return 0;
        }
    }
    cout << "correct password";
}


//Question Number Eleven
#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;
int main(){
    string name[3];
    cout <<"Enter first name: ";
    cin >> name[0];
    cout <<"Enter middle name: ";
    cin >> name[1];
    cout <<"Enter the last name: ";
    cin >> name[2];
    cout << "User intial is: ";
    for(int i=0;i<3;i++){
        cout <<(name[i][0])<<"-";
    }
}

//Question Number Twelve
#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;
int main(){
char correct[10] = {'A','B','A','C','D','C','B','A','D','D'};
char answer[10];
int score(0);
for(int i=0;i<10;i++){
    cout << "Answer Question "<< i+1<<" : ";
    cin>>answer[i];
    answer[i] = toupper(answer[i]);
    if(answer[i]==correct[i])
    score++;
}cout << "Your answer is ";
for(int i=0;i<10;i++){
    cout << answer[i]<<setw(5);
}
cout<< "\nYour Score is "<< score;
}
