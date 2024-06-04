// Write a C++ program to display the current date and time. Go to the editor
// Sample Output:
// Display the Current Date and Time :
// ----------------------------------------
// seconds = 57
// minutes = 33
// hours = 12
// day of month = 6
// month of year = 7
// year = 2017
// weekday = 4
// day of year = 186
// daylight savings = 0
// Current Date: 6/7/2017
// Current Time: 12:33:57...................??????????????
#include<iostream>
#include<conio.h>
#include<math.h>
#include<ctime>
#include<unistd.h>
#include<stdlib.h>
using namespace std;
int main()
{

 time_t t = time(NULL);
 tm * tPtr = localtime(&t);
 cout<<"------------------------------------------------------------------"<<endl;
 cout<<"Seconds : "<<(tPtr -> tm_sec) << endl;
 cout<<"Minutes : "<<(tPtr -> tm_min)<<endl;
 cout<<"Hours : "<<(tPtr -> tm_hour)<<endl;
 cout<<"Day of Month : "<<(tPtr -> tm_mday)<<endl;
 cout<<"Month of year : "<<(tPtr -> tm_mon)+1<<endl;
 cout<<"Year : "<<(tPtr -> tm_year)+1900<<endl;
 cout<<"weekday : "<<(tPtr -> tm_wday)<<endl;
 cout<<"Day of year : "<<(tPtr -> tm_yday)<<endl;
 cout<<"Day Light Saving : "<<(tPtr -> tm_isdst)<<endl;
 cout<<endl;
 cout<<endl;
 cout<<"Current time is : "<<(tPtr -> tm_hour)<<" : "<<(tPtr -> tm_min)<<" : "<<(tPtr -> tm_sec)<<endl;
 cout<<"Current date is : "<<(tPtr -> tm_mday)<<" / "<<(tPtr -> tm_mon)+1<<" / "<<(tPtr -> tm_year)+1900<<endl;

     


getch();
return (0);
}