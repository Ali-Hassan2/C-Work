// Write a program in C++ to enter P, T, R and calculate Simple Interest. Go to the editor
// Sample Output:
// Calculate the Simple Interest :
// -----------------------------------
// Input the Principle: 20000
// Input the Rate of Interest: 10
// Input the Time: 1.5
// The Simple interest for the amount 20000 for 1 years @ 10 % is: 2000.....????
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


     int p , r , t, i ;
     cout<<"Enter the principal : "<<endl;
     cin>>p;
     cout<<"Enter the rate of interest : "<<endl;
     cin>>r;
     cout<<"Enter the time : "<<endl;
     cin>>t;
      i = (p*r*t)/100;
      cout<<"The simple interest for the amount  : "<<p<<" for "<<t<<" years @ "<<r<< "% is = "<<i<<endl;

getch();
return (0);
}