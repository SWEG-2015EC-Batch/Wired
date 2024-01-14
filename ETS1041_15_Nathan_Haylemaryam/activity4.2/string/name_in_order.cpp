#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
   
    vector<string> names;

   
    cout << "Enter names (enter an empty string to finish):\n";
    string name;
    while (true) {
        cout << "Name: ";
        getline(cin, name);

        if (name.empty()) {
            break; 

        names.push_back(name);
    }

    sort(names.begin(), names.end());

    
    cout << "\nNames in alphabetical order:\n";
    for (const string& n : names) {
        cout << n << endl;
    }

    return 0;
}
