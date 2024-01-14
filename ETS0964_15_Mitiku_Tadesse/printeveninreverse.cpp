 #include <iostream>
 using namespace std;
  int main() {
    int n;
    cout << "Enter the size of the number: ";
    cin >> n;

    int numbers[n];
    cout << "Enter the list of numbers:\n";

    int evenCount = 0;
    int evenNumbers[n];  

    for (int i = 0; i < n; i++) {
        cin >> numbers[i];

        
        if (numbers[i] % 2 == 0) {
            evenNumbers[evenCount] = numbers[i];
            evenCount++;
        }
    }

   
    cout << "\nEven numbers in reverse order:\n";
    for (int i = evenCount - 1; i >= 0; i--) {
        cout << evenNumbers[i] << " ";
    }

    return 0;
}