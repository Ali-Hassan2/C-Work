// write a program to convert the milatry time to standard time....????
#include<iostream>
#include<conio.h>
#include<math.h>
#include<climits>
using namespace std;
int main()
{


     int h;
     int mins;
     cout<<"Enter the Military Hours : "<<endl;
     cin>>h;
     cout<<"Enter the Military Minutes : "<<endl;
     cin>>mins;
     if (h > 12 && h < 24)
     {
        h = h - 12;
        cout<<"The standard time is : "<<h<<" : "<<mins<<" PM"<<endl;
     }
     if (h==24)
     {
        h = h - 12;
        cout<<"The standard time is : "<<h<<" : "<<mins<<" AM"<<endl;
     }
     if (h==12)
     {
        cout<<"The standard time is : "<<h<<" : "<<mins<<" : "<<" PM"<<endl;
     }
     else
     {
        cout<<"The standard time is : "<<h<<" : "<<mins<<" : "<<" AM"<<endl;
     }


getch();
return (0);
}