// calcuating transmission speed of a file 
#include <iostream>
using namespace std;

int main() {
    // Default transmission speed
    const double defaultTransmissionSpeed = 960;

    // Input file size
    double fileSize;
    cout << "Enter the file size in bytes: ";
    cin >> fileSize;

    // Calculate transmission time
    double transmissionTime = fileSize / defaultTransmissionSpeed;

    // Convert transmission time to days, hours, minutes, and seconds
    int days = static_cast<int>(transmissionTime / 86400);  // 1 day = 24 * 60 * 60 seconds
    int hours = static_cast<int>((transmissionTime - days * 86400) / 3600);
    int minutes = static_cast<int>((transmissionTime - days * 86400 - hours * 3600) / 60);
    int seconds = static_cast<int>(transmissionTime - days * 86400 - hours * 3600 - minutes * 60);

    // Output
    cout << "\nFile Size: " << fileSize << " bytes" << endl;
    cout << "Transmission Speed: " << defaultTransmissionSpeed << " characters per second" << endl;
    cout << "Estimated Transmission Time: ";
    cout << days << " days, " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds" << endl;

    return 0;
}
