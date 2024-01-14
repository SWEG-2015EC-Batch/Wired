//Write a program that stores a password in a character array called pass. 
//The program then ask users for the password and check whether they typed the proper password or not.

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    const char* password = "PASSWORD12";
    char pass[11];  
    bool correct = false;
    int attempts = 0;

    cout << "Please enter a password to continue: ";
    cin.getline(pass, 11);  

    while (attempts < 3) {  
        if (strcmp(pass, password) == 0) {
            correct = true;
            break;  
        }

        cout << "Invalid password!!\nPlease retry: ";
        cin.getline(pass, 11);  
        attempts++;
    }

    if (correct) {
        cout << "---------Welcome----------";
    } else {
        cout << "Too many incorrect attempts. Access denied.";
    }

    return 0;
}













    /*const char password[]="PA$$WORD12";
    char pass[10];
    bool correct=true;

    cout<<"Please enter a password to continue: ";
    cin.getline(pass,10);

    if(strcmp(pass,password)!=0){
            correct=false;
    }
    
    if (correct){
        cout<<"---------Welcome----------";
    }else{
        for(int i=0; i<3; i++){
            cout<<"Invalid password!!\n Please retry: ";
            cin.getline(pass,10); 
            if(correct){
                cout<<"---------Welcome----------";
            }
        }
    }

return 0;
}*/