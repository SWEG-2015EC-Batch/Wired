#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    
    string inputString;
    cout << "Enter a string: ";
    getline(cin, inputString);

    
    unordered_map<char, int> charFrequency;

    for (char ch : inputString) {
        if (isalpha(ch) || isdigit(ch)) {
            charFrequency[ch]++;
        }
    }
char maxChar = '\0';
    char minChar = '\0';
    int maxFrequency = 0;
    int minFrequency = inputString.size();

    for (const auto& pair : charFrequency) {
        if (pair.second > maxFrequency) {
            maxFrequency = pair.second;
            maxChar = pair.first;
        }

        if (pair.second < minFrequency) {
            minFrequency = pair.second;
            minChar = pair.first;
        }
    }
out << "Character with the largest frequency: " << maxChar << " (Frequency: " << maxFrequency << ")\n";
    cout << "Character with the smallest frequency: " << minChar << " (Frequency: " << minFrequency << ")\n";

    return 0;
}
    
