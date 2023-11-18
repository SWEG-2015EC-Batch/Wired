# Problem Discription
write c++ program to calculate the time taken to send a file in bytes
# Problem Analysis
## Input
File size in bytes
## Output
Time taken to send the file in sec
## Process/Operation
  time_taken=file_size/960.
 Display time in sec
 # Algorithm in pseudocode
 Step1: start

Step 2: Read the file size

Step 3: Set the transmission rate in characters per second to 960

Step 4: time in Seconds=fileSizeInBytes/transmissionRate

Step 5: display the time taken in sec

Step 6: stop

 # Design the program
 ## Variable declaration and initialization
 int fileSizeInBytes,timeInSec;
 ## Constant Declaration and intialization
 const int transmissionRate=960;
 ## Reading input data
 cout << "Enter the file size in bytes";
 
 cin >> fileSizeInBytes;
 ## Perform operation
 timeInSec= fileSizeInBytes / transmissionRate;
 ## Print result
 cout << "time needed to send the file " << timeInSec<< "sec" << endl;
