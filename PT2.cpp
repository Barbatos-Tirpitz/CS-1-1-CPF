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
 cout << "\n$" << Peso << " US = " << (rate * Peso) << " Pesos. \n";
};

void promptAndWait(){
    cin.get();
    cout << "\nPress Enter or Return to Continue...";
}


int main(){

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(4); 
    
    float convertionRate = 50.73;
    unsigned dollarsIn;
    unsigned pesosIn;
    int ch;
    int ans=0;
    
    do{
        system("cls");
        cout << endl;
        cout << "Dollar to Peso1 Conversion App" << endl;
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
                cout << "\n Enter a Peso amount (without Peso sign, commas or a decimal): [####] ";
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
        }
    }
    while(ans = 0);
};

