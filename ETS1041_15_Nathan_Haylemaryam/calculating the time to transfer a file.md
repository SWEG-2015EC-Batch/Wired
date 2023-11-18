# Transmission Estimator

## Problem Analysis

### Purpose
The purpose of this C++ program is to estimate the transmission time required to send a file over a serial transmission line. It takes user input for the file size and calculates the estimated transmission time based on a default transmission speed. The output includes information about the file size, transmission speed, and the estimated transmission time in days, hours, minutes, and seconds.

### Functionality
1. Prompt the user to enter the file size in bytes.
2. Calculate the estimated transmission time using a default transmission speed of 960 characters per second.
3. Convert the transmission time to days, hours, minutes, and seconds.
4. Display the file size, transmission speed, and estimated transmission time in a user-friendly format.

### Input
- File size in bytes (user input).

### Output
- File size in bytes.
- Default transmission speed (960 characters per second).
- Estimated transmission time in days, hours, minutes, and seconds.

### Assumptions
- The default transmission speed is fixed at 960 characters per second.
- The calculation assumes that 1 day is equivalent to 24 hours, 1 hour is equivalent to 60 minutes, and 1 minute is equivalent to 60 seconds.

### Dependencies
- None

### Considerations for Future Improvements
- Allow the user to input a custom transmission speed.
- Enhance user input validation to handle invalid input more robustly.
- Provide additional details about the transmission process.

## Instructions for Running the Code
1. Clone the repository.
2. Compile the C++ program using a C++ compiler (e.g., g++).
3. Run the compiled executable.
4. Follow the prompts to input the file size.

## Example Usage
```bash
$ g++ filename.cpp -o transmission_estimator
$ ./transmission_estimator
