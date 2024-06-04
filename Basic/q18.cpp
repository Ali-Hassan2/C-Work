// Write a program in C++ that converts kilometers per hour to miles per hour. Go to the editor
// Sample Output:
// Convert kilometers per hour to miles per hour :
// ----------------------------------------------------
// Input the distance in kilometer : 25
// The 25 Km./hr. means 15.5343 Miles/hr.....????
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{


     int kmph , mph;

     cout<<"Enter the distance in kilometers : "<<endl;
     cin>>kmph;

     mph = ( kmph * 0.6213712);

     cout<<"\n--------------------------------\n"<<endl;
     cout<<"The distance in miles per hour is : "<<mph<<" Miles/ph"<<endl;


getch();
return (0);
}