#include <iostream>
using namespace std;
int main(){
    const int numofpeople=5;
    bool friends[numofpeople][numofpeople]= {{false, true, false, true, true},  
        {true, false, true, false, true},
        {false, true, false, false, false},
        {true, false, false, false, true},
        {true, true, false, true, false}};
        int friendPairs = 0;
    for (int i = 0; i < numofpeople; i++) {
        for (int j = i + 1; j < numofpeople; j++) {
            if (friends[i][j]) {
                friendPairs++;
            }
        }
    }

   cout << "Number of pairs of friends: " << friendPairs << endl;
    return 0;
}



    





