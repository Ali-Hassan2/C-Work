// Program to take the hours and minutes as input by the user and the 
// show that whether it is AM or PM using if-else statement........????/
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


     int hrs , mins;
     cout<<"Enter the hours : "<<endl;
     cin>>hrs;
     cout<<"Enetr the minutes : "<<endl;
     cin>>mins;
     if(hrs>=12&&hrs<=24)
     {
        cout<<"Its not AM. Its PM."<<endl;
     }
     else 
     {
        cout<<"Its AM.";
     }


getch();
return (0);
}