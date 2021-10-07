/*
Name: Joben Gabin
Description: EXAM/Hands on Exam, a C++ payroll program that computes payrolls,grosspay , netpay, hours worked, witholding tax accompanied by deducting SSS, Philhealth, SSS and Pagibig. 
Categorizing the employee status as contractual, probitionary and regular depending on their netpay.
Date: 8/10/2021
*/

#include <iostream>
#include <string>

using namespace std;
int main (){

    char choice;
    string name1,name2,paydate;
    int empnum ;
    const double tax = 0.12;
    double hpr, hrw, gp, wt, np, ph=150.00, SSS=250.00, pg=200.00;
  
    do {
    cout << endl;
    cout << "Enter Your First Name       : ";
    cin >> name1;

    cout << "Enter Your Second Name      : ";
    cin >> name2;

    cout << "Employee Number             : ";
    cin >> empnum;
    
    cout << "Date of Payday (DD-MM-YYYY) : ";
    cin >> paydate;
    
    cout << endl;
 
    cout << "Hourly Pay Rate             : ";
    cin >> hpr; 

    cout << "Hours Worked:               : ";
    cin >> hrw,

    cout << endl;

    cout << "Payroll for: " << name1 << " " << name2 << endl;
    cout << "Employee No.: " << empnum << endl;
    cout << "Payroll Date: " << paydate << endl;
    cout << endl;
    
    gp = hpr * hrw;

    wt = gp * tax;

    np = gp - wt - SSS - pg - ph;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint) ;
    cout.precision(2);
    
    cout << "You Earned " << hrw << " hours " << "at " << "PHP" << hpr << " per hour " << endl;
    cout << "Gross Pay:                         " << gp << endl;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint) ;
    cout.precision(3); 

    cout << "-------------------------------------------\n";
    cout << "\t Tax Deductible Receipt" << endl;
    cout << "-------------------------------------------\n";
    cout << "Withholding Tax :                   " << wt << endl;
    cout << "Philhealth      :                   " << ph << endl;
    cout << "SSS             :                   " << SSS << endl;
    cout << "Pagibig         :                   " << pg << endl;
    cout << "-------------------------------------------\n";
    cout << "Net Pay: " << np << endl;
    
    

    if (np < 5000)
        {
        cout << "Employee Status: Contractual" << endl;
        }

    else if (np >= 5000 and np <=10000)
        {
        cout << "Employee Status: Probationary" << endl;
        }

    else if (np > 10000)
        {
        cout << "Employee Status: Regular" << endl;
        }

    cout << "-------------------------------------------\n";

    
        
    cout <<"Would you like to try again?(Y/N)"<< endl;
        cin >> choice;
        cin.get();
        system("cls");
        if (choice != 'Y' and choice != 'y' and choice != 'N' and choice != 'n'){
            cout << choice << " is not a valid option. Try again" << endl; 
    }
    } while (choice !='N' && choice !='n');
    


return 0;
}

    
    

