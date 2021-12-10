/*
Name: Joben Gabin
Activity: Performance Task Finals
Description: Study Case.
Date: 10/12/2021
*/
#include <iostream>
#include <fstream>
#include <cstring>
#include <stdlib.h>
#include <stdio.h>
#include <string.h> 


using namespace std;

struct Vaccination
{
    char name[45];
    char vaccine[45];
    char dose[3];
    int age;
    string birthdate,date;
    
};

Vaccination getData(Vaccination); 
void displayData(Vaccination); 

int char1;
int ans=1;


int main() 
{

    
Vaccination a;

    char pass;
    char username[25] = "Admin";
    char IDCode[25] =  "AdminPassword123";
    char password[25];
    char birthdate[12];

    do{
    system("cls");
    cout << "Enter your Username: " << endl;
    cin >> username;

    cout << "Enter your Password: " << endl;
    cin >> password;

    if(!(strcmp(IDCode,password)))
    {
        system("cls");
        cout << "Correct Password\nWelcome\n" << endl;
        system("pause");
        system("cls");
        getchar();

        ifstream in_stream;
        ofstream out_stream;
        in_stream.open ("PerformanceTaskdata.txt");
        out_stream.open ("PerformanceTaskdata.txt", ios::app);
    
        cout << "Enter Full name: ";
        cin.getline(a.name, 50);

        cout << "Enter age: ";
        cin >> a.age;

        cout << "Enter Birthdate (DD/MM/YYYY): ";
        cin >> a.birthdate;

        cout << "Enter Date (DD/MM/YYYY): ";
        cin >> a.date;

        cout << "Vaccine Brand: ";
        cin >> a.vaccine;

        cout << "Dose: ";
        cin >> a.dose;

        system("cls");

    void displayData(Vaccination a);
    
    cout << "Accessed by: " << username << endl;
    cout << "Displaying Information." << endl;
    cout << "Name: " << a.name << endl;
    cout << "Age: " << a.age << endl;   
    cout << "Birthdate (DD/MM/YYYY): " << a.birthdate << endl;
    cout << "Date (DD/MM/YYYY): " << a.date << endl;
    cout << "Vaccine: " << a.vaccine << endl;
    cout << "Dose: " << a.dose << endl;
    

    out_stream << "-----------------------------------------------------------------------------------------------" << endl;
    out_stream << "Displaying Information." << endl;
    out_stream << "Accessed by: " << username << endl;
    out_stream << "Name: " << a.name << endl;
    out_stream << "Age: " << a.age << endl;
    out_stream << "Birthdate (DD/MM/YYYY): " << a.birthdate << endl;
    out_stream << "Date (DD/MM/YYYY): " << a.date << endl;
    out_stream << "Vaccine: " << a.vaccine << endl;
    out_stream << "Dose: " << a.dose << endl;
    out_stream << "-----------------------------------------------------------------------------------------------" << endl;

        return 0;
    }else{
        cout << "Incorrect Password\nDo you want to try again? Y/N" << endl;
    
        cin >> pass;
        cin.get();
        system("cls");
        if (pass != 'Y' and pass != 'y' and pass != 'N' and pass != 'n'){
            cout << pass << " is not a valid option. Try again" << endl; 
    }
    }
    } while (pass !='N' && pass !='n');
return 0;
}
    

Vaccination getData(Vaccination a) {

    cout << "Enter Full name: ";
    cin.get(a.name, 50);

    cout << "Enter age: ";
    cin >> a.age;

    cout << "Enter Date: ";
    cin >> a.date;

    cout << " Enter Birthdate: ";
    cin >> a.birthdate;

    cout << "Vaccine Brand: ";
    cin >> a.vaccine;

    cout << "Dose: ";
    cin >> a.dose;

    

    return a;
}



void displayData(Vaccination a)
{
    system("cls");
    cout << "-----------------------------------------------------------------------------------------------" << endl;
    cout << "Displaying Information." << endl;
    cout << "Name: " << a.name << endl;
    cout <<"Age: " << a.age << endl;
    cout << "Date: " << a.date << endl;
    cout << "Vaccine: " << a.vaccine << endl;
    cout << "Dose: " << a.dose << endl;
    cout << "-----------------------------------------------------------------------------------------------" << endl;
}

