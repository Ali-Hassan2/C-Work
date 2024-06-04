// C++  Program to take a value from the user as input 
// the month number and print number of days in that month. Using if-else.\....????
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


     int mon , day;
     cout<<"Enter the month number : "<<endl;
     cin>>mon;
if(mon == 1 || mon == 3 || mon == 5 || mon == 7 || mon == 8 || mon == 10 || mon == 12)
{
    cout<<"There are 31 days in month."<<endl;
}
else if (mon == 2)
{
    cout<<"There are 28 days in this month."<<endl;
}
else
{
    cout<<"There are 30 days in that month."<<endl;
}



getch();
return (0);
}