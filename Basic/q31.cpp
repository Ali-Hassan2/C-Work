//  Write a program in C++ to test the Type Casting. Go to the editor
// Sample Output:
// Formatting the output using type casting:
// ----------------------------------------------
// Print floating-point number in fixed format with 1 decimal place:
// Test explicit type casting :
// 0
// 0.5
// 0.5
// 0.0
// Test implicit type casting :
// 0
// 0
// int implicitly casts to double:
// 4.0
// double truncates to int!:
// 6.....?????
#include<iostream>
#include<conio.h>
#include<math.h>
#include<unistd.h>
#include<stdlib.h>
#include<ctime>
#include<iomanip>
using namespace std;
int main()
{


     cout<<"Print floating number formatting with 1 place."<<endl;
     cout << fixed << setprecision(1)<<endl;
     int n1 = 4 , n2 = 8;
     cout<< n1 / n2<<endl;
     cout<<double(n1/n2)<<endl;
     cout<<n1 / double (n2)<<endl;
     cout<< double (n1) / n2<<endl;
     cout<<"----------------------------------------------"<<endl;
     double i1 = 5.5 , i2 = 6.6;
     cout<< i1 / i2 <<endl;
     cout<< double (i1 / i2)<<endl;
     cout<<"-----------------------------------------------"<<endl;
     cout<<"Test implicity casts or not : "<<endl;
     i1 = n1 ;
     cout<< i1;
     cout<<"------------------------------------------------"<<endl;
     cout<<"Double trauncts to int"<<endl;
     i2 = n1;
     cout<<i2<<endl; 


getch();
return (0);
}