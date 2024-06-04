// Write a C++ Program to convert centimeter into meter and kilometer using the if-else 
// statement....????
#include<iostream>
#include<conio.h>
#include<math.h>
#include<unistd.h>
#include<stdlib.h>
#include<ctime>
#include<iomanip>
#include<sstream>
#include<vector>
using namespace std;
int main()
{
    while(true)
    {


     double cnt , met , km ;
     int choice;
     cout<<"Enter the length in centimeters : "<<endl;
     cin>>cnt;
     cout<<"For meters press 1 & for kilometers press 2 : "<<endl;
     cin>>choice;
     if(choice == 1)
     {
        met = cnt / 100;
        cout<<"The length in meters is : "<<met<<"m"<<endl;

     }
     else if (choice == 2) 
     {
        km = cnt / 1000;
        cout<<"The length in kilometers is : "<<km<<"Km"<<endl;
     }
    }


getch();
return (0);
}