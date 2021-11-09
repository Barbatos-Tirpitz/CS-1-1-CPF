/*  Name: Joben Gabin
    Activity: Midterm Hands-On Exam
    Description: console conversion app where you will choose one category and 4 conversion method
    Date: 9/11/2021
*/
#include <iostream>

using namespace std;

    char choice;
    float K2M = 0.001 , C2M = 100 , ML2M = 1000 , MC2M = 0.000001 ;
    double kilometer , meter, centimeter , milimeter , micrometer;
    int ch;
    
    int ans=1;

void meterToKilometer ();   
void meterToCentimeter ();   
void meterToMilimeter ();
void meterToMicrometer ();

void promptAndWait()
{
    cout << endl;
    cout << "\n[Y] Press to try Again";
    cout << "\n[N] Press to Terminate the app" << endl;
    cout << "\nDo you want to try again?\n"<< endl;
    cin >> choice;
    if (choice != 'Y' and choice != 'y' and choice != 'N' and choice != 'n') 
    cout << choice << " is not a valid option. Try again" << endl; 
   
}

void meterToKilometer (float kilometer, float meter )
    {
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(4); 
    cout << "Kilometer: \n" << (meter*0.001);
    }

void meterToCentimeter(float centimeter, float meter)
    {
    
    cout << "Centimeter: \n" << (meter*1000);
    }

void meterToMilimeter (float milimeter, float meter)
    {
     
    cout << "Milimeter: \n" << (meter*100);
    }

void meterToMicrometer (float micrometer, float meter)
    {
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(7); 
    
    cout << "Micrometer: \n" << (meter*0.000001);
    }


int main(){

   
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(4); 
    
    do{
        system("cls");
        cout << endl;
        cout << "Length Conversion App" << endl;
        cout << "[1] Meter to Kilometer" << endl;
        cout << "[2] Meter to Centimeter" << endl;
        cout << "[3] Meter to Milimeter" << endl;
        cout << "[4] Meter to Micrometer" << endl;
        cout << "[0] Exit The conversion App" << endl;
        cout << "Select Converstion :"<< endl;
        cin >> ch;

        switch (ch){
               
            case 1: {
                system("cls");
                cout << "Meter to Kilometer" << endl;
                cin >> meter;
                meterToKilometer (K2M,meter);
                promptAndWait();
                break;
            }
                
            case 2: {
                system("cls");
                cout << "Meter to Centimeter" << endl;
                cin >> meter;
                meterToCentimeter (MC2M,meter);
                promptAndWait();
                break;
                
            }
            case 3: {
                system("cls");
                cout << "Meter to Milimeter" << endl;
                cin >> meter;
                meterToMilimeter (ML2M,meter);
                promptAndWait();
                break;
            }

            case 4: {
                system("cls");
                cout << "Meter to Micrometer" << endl;
                cin >> meter;
                meterToMicrometer (MC2M,meter);
                promptAndWait();
                break;
            }

            case 0 :{
                
                cout << "Convertion App Terminated\nThank You for using the app";
                return 0;
            }
            default :{
                cout << "Invalid Input!";
                promptAndWait();
                }
        }
    } while (choice !='N' && choice !='n');
return 0;
}