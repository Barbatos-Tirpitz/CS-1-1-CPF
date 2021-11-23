#include <iostream>

using namespace std;


int main (){

    int a,b,c, triangle;

    cout << "Enter how many rows of your triangle: ";
    cin >> triangle;
    cout << endl;
    
    for (a=1; a<=triangle; a++)
    {

        for (c=a; c < triangle; c++)
        cout << " ";
        for (b=1; b<=(2*triangle-1); b++)
        {

            if(b==1|| b==2*a-1 || a==triangle)
            { 
                cout << "*";
            } 
            else
            {
                cout << " ";
                
            }   
        }
        cout << endl;
    } 

    cout << endl;

     for (a=1; a<=triangle; a++)
    {

        for (c=a; c < triangle; c++)
        cout << " ";
        for (b=1; b<=(2*triangle-1); b++)
        {

            if(b==1|| b==2*a-1 || a==triangle)
            { 
                cout << "*";
            } 
            else
            {
                cout << " ";
                
            }   
        }
        cout << endl;
    } 

    cout << endl;

     for (a=1; a<=triangle; a++)
    {

        for (c=a; c < triangle; c++)
        cout << " ";
        for (b=1; b<=(2*triangle-1); b++)
        {

            if(b==1|| b==2*a-1 || a==triangle)
            { 
                cout << "*";
            } 
            else
            {
                cout << " ";
                
            }   
        }
        cout << endl;
    }    
return 0;
}   
