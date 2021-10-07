/*
Name: Joben Gabin
Activity Name: PT1
Description: A real, interactive, odd/even number scheme, Logically the program will tell if the
number is odd or even number for a series of int inputs.
Date: 17/09/2021
*/

#include <iostream>

using namespace std;

int main(){
    
    int range;
    int cn;
  
      
        cout << "Range of Numbers : ";
        cin >> range;

        cout << "Enter 5 consecutive numbers (e.g 1, 2, 3): ";
        cin >> cn;
        
        if (cn %2==0)
        {
            cout << cn << " is an Even Number." << endl;
        }
        else
            cout << cn << " is an Odd Number." << endl;


        while ( range != cn )
        {
        cin >> cn;
        if (cn %2==0)
        {
            cout << cn << " is an Even Number." << endl;
        }
        else
            cout << cn << " is an Odd Number." << endl;

        }
       






return 0;

} 