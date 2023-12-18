 #include <iostream>
   using namespace std;
   int main(){
    char ch;
    do{
    cout<<"enter the character :";
    cin>>ch;
    if('A'<=ch && ch<='Z'){
     cout<<"the character is uppercase letter "<<endl;
     if(ch=='A'|| ch=='E'|| ch=='I' || ch=='O' || ch=='U') {
       cout<<"the characte is vowel "<<endl;

     }
   else{
    cout<<"the character is consonant "<<endl;

   }
   }else if('a'<=ch && ch<='z'){
       cout<<"the character is lowercase letter "<<endl;
       if(ch=='a' || ch=='e'|| ch=='i'|| ch=='o' || ch=='u'){
        cout<<"the character is vowel "<<endl;
        }else{
           cout<<"the character is consonant "<<endl;

        }
       
   }else if('0'<=ch && ch<='9'){
    cout<<"the character is numnber "<<endl;
    int num=ch-'0';
    if(num%2==0){
        cout<<"the digit is even number "<<endl;

    }else{
        cout<<"the digit is odd number "<<endl;

    }

   }else {
    cout<<"the charracter is special character ";
   
   }
  }while(1);
     cout<<"enter the character :";
     cin>>ch;
     

   


return 0;
   }