#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  // Define the voltage values
  double volts[] = {11.95, 16.32, 12.15, 8.22, 15.98, 26.22, 13.54, 6.45, 17.59};

  // Print header and line
  cout << "Voltages:" << endl;


  // Print voltages in 3 columns with spacing
  for (int i = 0; i < 9; ++i) {
    cout << setw(8) << volts[i] << "  ";
    if ((i + 1) % 3 == 0) cout << endl;
  }

  return 0;
}
