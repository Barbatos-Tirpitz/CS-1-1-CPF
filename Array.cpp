/*
Name: Joben D. Gabin
Description: An Array program that uses inputs a set element which are passed to functions: search, sorting as ascending and descending, then executing the program.
OE#6
CLASS and SECTION: CS 1-1
Date: 26/11/2021
*/
#include <iostream>

using namespace std;

const int size = 100;

void search(int input[], int cnt);
void sort_asc(int input[], int cnt);
void sort_des(int input[], int cnt);
void promptAndWait();

int main(){
    
    int input[size], cnt, choice;
    system("cls");
    cout << "Enter Number of Elements in Array\n";
    cin >> cnt;
     
    cout << "Enter " << cnt << " numbers \n";
    for(int i = 0; i < cnt; i++)
    {
        cin >> input[i];    
    }
    do{

    system("cls");
    cout << endl;
    cout << "Length Conversion App" << endl;
    cout << "[1] Searching Array" << endl;
    cout << "[2] Sorting Array (Ascending)" << endl;
    cout << "[3] Sorting Array (Descending)" << endl;
    cout << "[0] Exit The conversion App" << endl;
    cout << "Select Converstion :"<< endl;
    cin >> choice;

    switch (choice)
        {
            case 1:{
                
                search(input, cnt);
                cout << ""<< endl;
                system("pause");
                break;
            }

            case 2:{
                
                sort_asc(input, cnt);
                cout << ""<< endl;
                system("pause");
                break;
            }

            case 3:{
                
                sort_des(input, cnt);
                cout << ""<< endl;
                system("pause");
                break;
            }

            case 0:{
                
                cout << "Thank you for using the App !!!" << endl;
                return 0;
            }                
            
            default:

                cout << "Invalid Input!!!" << endl;
                break;
        }
    
    }while (true);
 return 0;
}


void search(int input[], int cnt){

   for(int x = 0; x < cnt; x++){

    cout << "Array Elmement [" << x << "] "<< input[x] << endl;
    }
}

void sort_asc(int input[], int cnt){

    int a, b, c;

    for(b=0; b<cnt; b++)
    {

        for(a=b+1; a<cnt; a++)
        {

        if(input[a] < input[b])
        {

        c = input[b];
        input[b] = input[a];
        input[a] = c;

        }
        }
    }
    
    cout<<"Elements of array in sorted ascending order:"<<endl;
    for(b=0; b<cnt; b++)
    {
        cout<<input[b]<<endl;
    }
}

void sort_des(int input[], int cnt){

    int a, b, c;

    for (b = 0; b < cnt; ++b)
    {

    for (a = b + 1; a < cnt; ++a)
    {
    if (input[b] < input[a])
    {
    c = input[b];
    input[b] = input[a];
    input[a] = c;
    }
    }
    }

    cout<<"\n Numbers in Descending Order : \n";
    for (b = 0; b < cnt; ++b)
    {
        cout<<" ";
        cout<<input[b];
        cout<<"\n";
    }
}

