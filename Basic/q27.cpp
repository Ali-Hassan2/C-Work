// Write a program in C++ to check whether a number is positive, negative or zero. Go to the editor
// Sample Output:
// Check whether a number is positive, negative or zero :
// -----------------------------------------------------------
// Input a number : 8
// The entered number is positive....????
#include<iostream>
#include<conio.h>
#include<math.h>
#include<unistd.h>
#include<stdlib.h>
using namespace std;
int main()
{


     int n ;
     cout<<"Enter a number : "<<endl;
     cin>>n;
     if(n>0)
     {
        cout<<"Entered number is a positive number : " <<endl;
     }
     else if(n==0)
     {
        cout<<"entered number is zero. "<<endl;
     }
     else
     {
        cout<<"entered ny=umber is negative."<<endl;
     }
    


getch();
return (0);
}