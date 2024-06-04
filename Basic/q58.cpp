#include<iostream>
#include<conio.h>
#include<math.h>
#include<climits>
using namespace std;
int main()
{


     int year;
     cout<<"Please Enter  a year : "<<endl;
     cin>>year;
     if(year % 4 == 0 )
     {
        cout<<"leap year."<<endl;
     }
     if(year % 100 == 0 && year % 400 == 0)
     {
        cout<<"leap year."<<endl;
     }


getch();
return (0);
}