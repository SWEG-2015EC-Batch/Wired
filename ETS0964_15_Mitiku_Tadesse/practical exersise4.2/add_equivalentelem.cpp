

#include <iostream>
using namespace std;

int main() {
    const int n = 2;
    int first[n][n], second[n][n], result[n][n];
    int choice;

    do {
        
        for (int i = 0; i < n; i++) {
            cout << "Enter row " << i + 1 << " of the first array: ";
            for (int j = 0; j < n; j++) {
                cin >> first[i][j];
            }
            cout << "   Row " << i + 1 << " of the first array: ";
            for (int j = 0; j < n; j++) {
                cout << first[i][j] << "\t";
            }
            cout << endl;
        }

        
        for (int i = 0; i < n; i++) {
            cout << "Enter row " << i + 1 << " of the second array: ";
            for (int j = 0; j < n; j++) {
                cin >> second[i][j];
            }
            cout << "   Row " << i + 1 << " of the second array: ";
            for (int j = 0; j < n; j++) {
                cout << second[i][j] << "\t";
            }
            cout << endl;
        }

        // Add equivalent elements and print
        cout<<"the resulting array";
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (first[i][j] == second[i][j]) {
                    result[i][j] = first[i][j] + second[i][j];
                } else {
                    result[i][j] = 0;
                }
                cout << result[i][j] << "\t";  
            }
            cout << endl;
        }
        cout<<"do you want to continue ?(1 to continue , 0 to exit):"<<endl;
        cin>>choice;
    }while(choice==1);

        return 0;
    }
