//  Write a program in C++ which swap the values of two variables not using third variable. Go to the editor
// Sample Output:
// Swap two numbers without using third variable:
// ---------------------------------------------------
// Input 1st number : 25
// Input 2nd number : 20
// After swapping the 1st number is : 20
// After swapping the 2nd number is : 25.....????
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


     int n1 , n2 ;
     cout<<"Enter the first number : "<<endl;
     cin>>n1;
     cout<<"enter the second number : "<<endl;
     cin>>n2;
     n2 = n2 + n1;
     n1 = n2 - n1;
     n2 = n2 - n1;
     cout<<"After swaping the two numbers "<<n1<<" : "<<n2<<endl;


getch();
return (0);
}