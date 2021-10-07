/*
Name: Joben Gabin
Activity Name: OE#3
Description: Create a salary program in C++ with inputs, employee id, employee name, hours worked, and rate per hour.
Salary is computed based on hours worked and rate per hour minus tax based on the tax schemes.
Date: 23/09/2021
*/ 

#include <iostream>

using namespace std;

int main(){
    
    int salary, taxrate;
    string Fname, Lname; //First Name and Last Name
    int nmh; // number of hours on work;
    int eID; // Employee ID
    double rph;// rate per hour
    double gp, np; // gross pay and net pay

    cout << "Enter your First name : ";
    cin >> Fname;
    cout << "Enter your Last name  : ";
    cin >> Lname;
    cout << "Enter your Employee ID: ";
    cin >> eID;

    cout << "Enter Numbers of hours worked: ";
    cin >> nmh; // number of hours on work;
    cout << "Enter the rate per hour      : ";
    cin >> rph; // rate per hour
    
/*------------------------------------------------------------------------------------------------------------------------------------
Below is calculations w/ outputs. 
NET PAY IS GROSS PAY AFTER DEDUCTION
GROSS PAY IS EARNED MONEY BEFORE REDUCTION
------------------------------------------------------------------------------------------------------------------------------------*/
  cout.setf(ios::fixed);
  cout.setf(ios::showpoint) ;
  cout.precision(3); 
    gp = rph * nmh;
    if (nmh == 0 || rph == 0){
        cout << "Invalid Input, please try again." << endl;
        return 0;
        }
   
        else if (gp >40000){
        np= gp - (gp * .12);
        }
       
        else if (gp >=30000 and gp <=40000 ){
        np= gp - (gp * .10);   
        }

        else if (gp <30000 ){
        np= gp - (gp * .05);     
        }
        
    

cout << "------------------------------------------------------------------------------------------------------------------------------------" << endl;
cout << "Name: "<< Fname << " " << Lname << endl;
cout << "Your gross pay is P" << gp << endl;
cout << "Press 1 if your gross pay is >40000 " << endl;
cout << "Press 2 if your gross pay is 30000 - 40000" << endl;
cout << "Press 3 if your gross pay is >3000" <<endl;
cin >> taxrate;
switch (taxrate){
case 1:
cout << "\nYour tax rate is 12%" << endl;
break;
case 2:
cout << "\nYour tax rate is 10%" << endl;
break;
case 3:
cout << "\nYour tax rate is 5%" << endl;
break;
default:
cout << "\nInvalid Input" << endl;
break;
}
  


cout << "Your Net pay is P" << np << endl;

return 0;
} 