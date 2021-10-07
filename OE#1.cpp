#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
  string firstName, lastName, gender, section, course, here; 
  int age, year, contactNumber, section1; 
  char choice; 
  
  {
  
  do {
    

  cout << "First Name: ";
  cin >> firstName;
  cout << "Last Name: ";
  cin >> lastName;
  cout << "Gender: ";
  cin >> gender;
  cout << "Age: " ;
  cin >> age;
  cout << "Section(CS): ";
  cin >> section;
  cout << "Section(1 1): ";
  cin >> section1;
  cout << "Year: ";
  cin >> year;
  cout << "Course: ";
  cin >> course;
  cout << "Contact Number: ";
  cin >> contactNumber;
  cin.get();
  system("cls");
 
  cout << "Name: ";
  cout << firstName ,cout << " " ,cout << lastName << endl; 
  cout << "Gender: ";
  cout << gender << endl;
  cout << "Age: ";
  cout << age << endl;
  cout << "Section (CS 1-1): "; 
  cout << section << endl;
  cout << "Year: ";
  cout << year << endl;
  cout << "Course: ";
  cout << course << endl;
  cout << "Contact Number: ";
  cout << contactNumber << endl;
  cin.get();
  system("cls");
        cout <<"Would you like to try again?(Y/N)"<< endl;
        cin >> choice;
        if (choice != 'Y' and choice != 'y' and choice != 'N' and choice != 'n') 
            cout << choice << " is not a valid option. Try again" << endl; 
    } while (choice !='N' && choice !='n');
  }
return 0;
}

 


  
 

 
 
