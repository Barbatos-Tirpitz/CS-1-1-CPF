/*
Name: Joben D. Gabin
Activity Name: Performance Task 3
Description:  POS to apply file I/O stream. Its means that your data will be recorded in a file permanently.
*/

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <cstdlib>
#include <string>

using namespace std;   
const double TAX = 0.12;
char choice;

int main(){
do{

string pname1, pname2 ,pname3 ,pname4, cname;
double price1,price2, price3, price4 , t_price, tax_price, total_taxedprice;
int qty1, qty2, qty3, qty4, pnumber1, pnumber2, pnumber3, pnumber4 ;

ifstream in_stream;
ofstream out_stream;
in_stream.open ("test.txt");
out_stream.open ("test.txt", ios::app);
  
  cout << "       POINT OF SALES SYSTEM          ";
  cout << "\n------------------------------------" << endl;
  cout << "Customer Name:     "; 
  getline(cin,cname);
  cout << "Product Name:      "; 
  cin >> pname1;
  cout << "Product Number:    ";
  cin >> pnumber1;
  cout << "Enter Quantity:    ";
  cin >> qty1;
  cout << "Enter Price:       ";
  cin >> price1;

  cout << "\n-------------------------------------------" << endl;
  cout << "Product Name:      "; 
  cin >> pname2;
  cout << "Product Number:    ";
  cin >> pnumber2;
  cout << "Enter Quantity:    ";
  cin >> qty2;
  cout << "Enter Price:       ";
  cin >> price2;

  cout << "\n-------------------------------------------" << endl;
  cout << "Product Name:      "; 
  cin >> pname3;
  cout << "Product Number:    ";
  cin >> pnumber3;
  cout << "Enter Quantity:    ";
  cin >> qty3;
  cout << "Enter Price:       ";
  cin >> price3;

  cout << "\n-------------------------------------------" << endl;
  cout << "Product Name:      "; 
  cin >> pname4;
  cout << "Product Number:    ";
  cin >> pnumber4;
  cout << "Enter Quantity:    ";
  cin >> qty4;
  cout << "Enter Price:       ";
  cin >> price4;

  t_price = (qty1 * price1) + (qty2 * price2) + (qty3 * price3) + (qty4 * price4);
  tax_price = t_price * TAX;
  total_taxedprice = t_price - tax_price;


  cout.setf(ios::fixed);
  cout.setf(ios::showpoint) ;
  cout.precision(3); 



  cout << "\n-------------------------------------------" << endl;
  cout << "-----------------RECEIPT---------------------" << endl;
  cout << "Customer Name: " << cname << endl;
  cout << "Product Name : " << pname1 << endl;
  cout << "Quantity     : " << qty1 << endl;
  cout << "Price        : " << "P" << price1 << endl;

  cout << "\n-------------------------------------------" << endl;

  cout << "Product Name : " << pname2 << endl;
  cout << "Quantity     : " << qty2 << endl;
  cout << "Price        : " << "P" << price2 << endl;

  cout << "\n-------------------------------------------" << endl;

  cout << "Product Name : " << pname3 << endl;
  cout << "Quantity     : " << qty3 << endl;
  cout << "Price        : " << "P" << price3 << endl;

  cout << "\n-------------------------------------------" << endl;

  cout << "Product Name : " << pname4 << endl;
  cout << "Quantity     : " << qty4 << endl;
  cout << "Price        : " << "P" << price4 << endl;

  cout << "\n-------------------------------------------" << endl;
  cout.precision(4);
  cout << "Total Price (non-VAT) : " << "P" << t_price << endl;
  cout << "VAT                   : " << "P" << tax_price << endl;
  cout << "Total VAT Price       : " << "P" << total_taxedprice << endl;

  
  out_stream << "\n-------------------------------------------------------------------------------------------------------------------------------------" << endl;
  out_stream << "Customer Name:" << cname << endl;
  out_stream << "Product Name : " << pname1 << " Quantity   : " << qty1 << " Price : " << "P" << price1 << endl;
  out_stream << "Product Name : " << pname2 << " Quantity   : " << qty2 << " Price : " << "P" << price2 << endl;
  out_stream << "Product Name : " << pname3 << " Quantity   : " << qty3 << " Price : " << "P" << price3 << endl;
  out_stream << "Product Name : " << pname4 << " Quantity   : " << qty4 << " Price : " << "P" << price4 << endl;
  out_stream << "Total Price (non-VAT) : " << "P" << t_price << " || VAT : " << "P" << tax_price << " || Total VAT Price : " << "P" << total_taxedprice;
  out_stream << "\n-------------------------------------------------------------------------------------------------------------------------------------" << endl;

  cout << "\n-------------------------------------------" << endl;
  cout <<"Would you like to try again?(Y/N)"<< endl;
  cout << "\n-------------------------------------------" << endl;
 
  cin >> choice;
  if (choice != 'Y' and choice != 'y' and choice != 'N' and choice != 'n') 
  
  cout << choice << " is not a valid option. Try again" << endl; 

}while
(choice !='N' && choice !='n');

return 0;
}

/*trash bin 
cout << "enter your name: " << endl;
getline(cin,pname1);
in_stream >> pname1;
cout << "enter your course: " << endl;
getline(cin,pname2);
in_stream >> course;
*/