//  Write a program in C++ to compute quotient and remainder. Go to the editor
// Sample Output:
// Compute quotient and remainder :
// -------------------------------------
// Input the dividend : 25
// Input the divisor : 3
// The quotient of the division is : 8
// The remainder of the division is : 1......????
#include<iostream>
#include<conio.h>
#include<math.h>
#include<unistd.h>
#include<stdlib.h>
using namespace std;
int main()
{


     int divisor , div , quo , rem;
     cout<<"Enter the divisor : "<<endl;
     cin>>divisor;
     cout<<"Enter the dividend : "<<endl;
     cin>>div;
     quo = divisor / div;
     rem = divisor % div;
     cout<<"The quotient is : "<<quo<<endl;
     cout<<"The reminder is : "<<rem<<endl;


getch();
return (0);
}