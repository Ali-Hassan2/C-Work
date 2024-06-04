// Write a C++ program to input day number and print weekday by using the if-else statement......?????
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


     int weekd;
     cout<<"Enter the weekday number from 1 - 7 : "<<endl;
     cin>>weekd;
     if(weekd==1)
     {
        cout<<"Its Monday.";
     }
     else if(weekd == 2)
     {
        cout<<"Its tuesday.";
     }
     else if(weekd == 3)
     {
        cout<<"Its wednesday.";
     }
     else if(weekd == 4)
     {
        cout<<"Its Thursday.";
     }
     else if(weekd == 5)
     {
        cout<<"Its friday.";
     }
     else if(weekd == 6)
     {
        cout<<"Its saturday.";
     }
     else if(weekd == 7)
     {
        cout<<"Its sunday.";
     }


getch();
return (0);
}