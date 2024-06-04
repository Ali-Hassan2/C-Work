// Write a program in C++ to check overflow/underflow during various arithmetical operation. Go to the editor
// Sample Output:
// Check overflow/underflow during various arithmetical operation :
// Range of int is [-2147483648, 2147483647]
// ---------------------------------------------------------------------
// Overflow the integer range and set in minimum range : -2147483648
// Increasing from its minimum range : -2147483647
// Product is :1
// Underflow the range and set in maximum range : 2147483647
// Decreasing from its maximum range : 2147483646
// Product is : 0.....????
#include<iostream>
using namespace std;

int main()
{
int n1 = 2147483647;
cout<<"-----------------------------------------"<<endl;
cout<<"-----------------------------------------"<<endl;
cout<<"-----------------------------------------"<<endl;
cout<<"Overflow the integer range and set in minimum range : "<<n1 + 1<<endl;
cout<<"Increasing from its minimum range : "<<n1 + 2<<endl;
int product = 0;
product =  n1 * n1;
cout<<"The product is = "<<product<<endl; 

int n2 = -2147483648;
cout<<"-----------------------------------------"<<endl;
cout<<"-----------------------------------------"<<endl;
cout<<"-----------------------------------------"<<endl;
cout<<"Underflow the integer range and set in minimum range "<<n2-1<<endl;
cout<<"Decreeasing from its minimum range "<<n2-2<<endl;
int prod;
prod = n2 * n2;
cout<<"The product is : "<<prod<<endl;






return (0);
}