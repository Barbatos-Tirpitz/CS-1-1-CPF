/*  Name: Joben Gabin
    Activity: OE5
    Description: Reverse string or unsinged integer console app.
    Date: 5/11/2021
*/
#include <iostream>
#include <string>

using namespace std;

char ch[30];
int chs,i,k=0,ans=1;
void reverseS();
void reverseI();
    

void promptAndWait()
{
   cout << "\n\nDo you want to try again"<< endl;
   cout << "1 = To Try Again" << endl;
   cout << "0 = To Terminate the App" << endl;
   cout << endl;
   cin >> ans;
}

void reverseS()
{
    for (i=0; ch[i]!='\0';i++)
   {
      k++;
   }
    cout << "Reverse String: ";

    for (i=k-1;i>=0;i--)
   {
      cout << ch[i];
   }
}

void reverseI(){

    for (i=0; ch[i]!='\0';i++)
    {
        k++;
    }
    cout << "Reverse Integer: ";

    for (i=k-1;i>=0;i--)
    {
        cout << ch[i];
    }
}


int main()
{
    char choice;
   
    do{
    system("cls");
        cout << endl;
        cout << "Reverse a string or unsinged integer console app" << endl;
        cout << "[1] Reverse a String" << endl;
        cout << "[2] Reverse unsigned Integer" << endl;
        cout << "[3] Exit The Reversing String App" << endl;
        cout << "Select Converstion:"<< endl;
        cin >> chs;

    switch (chs){

         case 1: 
            {
            system("cls");
            cout << "Enter a string: ";
            cin.ignore();
            cin.getline(ch,30);
            reverseS();
            promptAndWait();
            break;
            }
        
        case 2: {
            system("cls");
            cout << "Enter Unsigned Integer: ";
            cin.ignore();
            cin.getline(ch,30);
            reverseI();
            promptAndWait();
            break;
        }
         case 3 :{
                
                cout << "Convertion App Terminated\nThank You for using the app";
                return 0;
        }
        default :{
                cout << "Invalid Input!";
                promptAndWait();
                 }
        }
    }while (ans==1);
return 0;
}
