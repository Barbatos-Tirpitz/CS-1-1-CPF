/*  Name: Joben Gabin
    Activity: Performance Task 2
    Description: Conversion Console App using functions [Dollar to Peso & Peso to Dollar]
    this is also a debugging activity
    Date: 29/10/2021
*/
#include <iostream>


using namespace std; 

struct group_facet: public numpunct<char> {
    protected:
    string do_grouping() const { return "\003"; }
};


void promptAndWait ();

void dollarsToPeso(float rate, unsigned dollars = 0)
{
 cout.imbue(locale(cout.getloc(),new group_facet));
 cout << "\n$" << dollars << " US = " << (rate * dollars) << " Pesos. \n";
};

void pesoToDollars(float rate, unsigned Peso = 0)
{
 cout.imbue(locale(cout.getloc(),new group_facet));
 cout << "\nPHP " << Peso << " PHP = " << (rate * Peso) << " USD. \n";
};

void promptAndWait(){
    cin.get();
    cout << "\nWould you like to try again?";
}


int main(){

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(4); 
    
    float convertionRate = 50.73;
    unsigned dollarsIn;
    unsigned pesosIn;
    int ch;
    char choice;
    int ans=0;
    
    do{
        system("cls");
        cout << endl;
        cout << "Dollar to Peso Conversion App" << endl;
        cout << "[1] Dollar to Peso" << endl;
        cout << "[2] Peso to Dollar" << endl;
        cout << "[0] Exit The conversion App" << endl;
        cout << "Select Converstion :"<< endl;
        cin >> ch;
        
        switch (ch){
               
            case 1: {
                cout << "\nConvert Dollar to Peso" << endl;
                dollarsToPeso(convertionRate=50.73,dollarsIn=1);
                cout << "Enter a US Dollar amount (without dollar sign, commas or a decimal): [####] ";
                cin >> dollarsIn;
                dollarsToPeso(convertionRate,dollarsIn);
                promptAndWait();
                break;
            }
                
            case 2: {
                cout << "\n Convert Peso To Dollars" << endl;
                pesoToDollars(convertionRate=0.020,pesosIn=1);
                cout << "Enter a Peso amount (without Peso sign, commas or a decimal): [####] ";
                cin >> pesosIn;
                pesoToDollars(convertionRate,pesosIn);
                promptAndWait();
                break;
                
                
            }
            case 0 :{
                promptAndWait();
                cout << "Convertion App Terminated\nThank You for using the app";
                return 0;
            }
            default :{
                cout << "Invalid Input!";
                promptAndWait();
            }
        }cout <<"\nPress Y to continue or N to terminate the app."<< endl;
        cin >> choice;
        if (choice != 'Y' and choice != 'y' and choice != 'N' and choice != 'n') 
            cout << choice << " is not a valid option. Try again" << endl; 
    } while (choice !='N' && choice !='n');
    
    while(ans = 0);
};

