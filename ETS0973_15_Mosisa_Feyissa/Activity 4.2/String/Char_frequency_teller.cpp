//Write a program that find the frequency of vowel, consonant, digit and special character
#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std;

int main(){ 
    char line[100];
    int freq[4]={0};

    cout<<"Please type any thing: ";
    cin.getline(line,100);

    for(int i=0; line[i]!='\0'; i++){
        if (line[i] == 'a' || line[i]=='A' || line[i]=='e' || line[i]=='E' || line[i]=='i' || line[i]=='I' || line[i]=='o' || line[i]=='O' || line[i]=='u' || line[i]=='U'){
            freq[0]++;
        }else if((line[i]>='a' && line[i]<='z')||(line[i]>='A'&& line[i]<='Z')){
            freq[1]++;
        }else if(line[i]>='0' && line[i]<='9'){
            freq[2]++;
        }else if(line[i]==' '){
            continue;
        }else{
            freq[3]++;
        }
    }
    cout<<"\nThe no. of vowels: ";
    cout<<freq[0];
    cout<<"\nThe no. of consonants: ";
    cout<<freq[1];
    cout<<"\nThe no. of digits: ";
    cout<<freq[2];
    cout<<"\nThe no. of special caracters: ";
    cout<<freq[3];

return 0;
}


