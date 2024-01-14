  #include <iostream>

  using namespace std;
 int main() {
    string choice;

  string firstName, middleName, lastName;
  do{
  cout << "Enter your first name: ";
  cin >> firstName;

  cout << "Enter your middle name: ";
  cin >> middleName;

  cout << "Enter your last name: ";
  cin >> lastName;

  char initial1 = firstName[0];
  char initial2 = middleName[0];
  char initial3 = lastName[0];

  cout << "Your initials are: " << initial1 << initial2 << initial3 << endl;
   cout << "\nDo you want to enter another student's initials? (y/n): ";
    cin >> choice;
  }while(choice=="yes");
  return 0;
}