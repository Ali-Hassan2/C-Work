// Write a program in C++ to display various type or arithmetic operation using mixed data type. Go to the editor
// Sample output:
// Display arithmetic operations with mixed data type :
// ---------------------------------------------------------
// 5 + 7 = 12
// 3.7 + 8.0 = 11.7
// 5 + 8.0 = 13.0
// 5 - 7 = -2
// 3.7 - 8.0 = -4.3
// 5 - 8.0 = -3.0
// 5 * 7 = 35
// 3.7 * 8.0 = 29.6
// 5 * 8.0 = 40.0
// 5 / 7 = 0
// 3.7 / 8.0 = 0.5
// 5 / 8.0 = 0.6......?????
#include<iostream>
using namespace std;

int main()
{
int a = 5 , b = 7;
double n = 3.7 , m = 8.0;

cout<<"The sum of"<<a<<" and "<<b<<" is : "<<a+b<<endl;
cout<<"The sum of two numbers is : "<<n+m<<endl;
cout<<"The sum of two numbers is : "<<a+m<<endl;
cout<<"The subtraction of two numbers is : "<<a-b<<endl;
cout<<"The subtraction of two numbers is : "<<n-m<<endl;
cout<<"The subtraction of two numbers is : "<<a-m<<endl;
cout<<"The product of two numbers is : "<<a*b<<endl;
cout<<"The product of two numbers is : "<<n*m<<endl;
cout<<"The product of two numbers is : "<<a*m<<endl;
cout<<"The division of two numbers is : "<<a/b<<endl;
cout<<"The division of two numbers is : "<<n/m<<endl;
// cout<<"The division of two numbers is : "<<a/m<<endl;3..3333333333333333
// 3333333333333333333333333333344344
// 343
// 44
// 545555554545
// 4545
// 4545455555555555555555
// 5555555555555555555555
// 555555555555555555555
// 555555555555555555555
// 5333,,<<ENDL;
// cout<<"Please recheck them for the better result : "<<endl;
return (0);
}