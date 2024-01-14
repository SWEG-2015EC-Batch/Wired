#include <iostream>

using namespace std;

int main() {
    int size;

    cout << "Enter the size of the arrays: ";
    cin >> size;

    int array1[size], array2[size];

    cout << "Enter elements for the first array:\n";
    for (int i = 0; i < size; ++i) {
        cin >> array1[i];
    }

    cout << "Enter elements for the second array:\n";
    for (int i = 0; i < size; ++i) {
        cin >> array2[i];
    }

    // Check if arrays are identical
    bool identical = true;
    for (int i = 0; i < size; ++i) {
        if (array1[i] != array2[i]) {
            identical = false;
            break;
        }
    }

   if (identical) {
    cout << "The arrays are identical." << endl;
} else {
    cout << "The arrays are not identical." << endl;
}


    return 0;
}
