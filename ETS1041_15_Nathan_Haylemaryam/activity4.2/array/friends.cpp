#include <iostream>

const int numPeople = 4; // Adjust the number of people as needed

int main() {
    bool friendships[numPeople][numPeople] = {
        {false, true, true, false},
        {true, false, true, false},
        {true, true, false, true},
        {false, false, true, false}
    };


    for (int i = 0; i < numPeople; ++i) {
        for (int j = 0; j < numPeople; ++j) {
            if (friendships[i][j]) {
                std::cout << "* ";
            } else {
                std::cout << "  ";
            }
        }
        std::cout << std::endl;
    }


    int friendPairsCount = 0;
    for (int i = 0; i < numPeople; ++i) {
        for (int j = i + 1; j < numPeople; ++j) {
            if (friendships[i][j]) {
                std::cout << "Friends: " << i << " and " << j << std::endl;
                friendPairsCount++;
            }
        }
    }

    
    std::cout << "Total number of friend pairs: " << friendPairsCount << std::endl;

    return 0;
}
