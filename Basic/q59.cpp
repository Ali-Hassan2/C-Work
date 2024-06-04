#include<iostream>
#include<conio.h>
#include<math.h>
#include<climits>
using namespace std;
int main()
{


     int temp;
     cout<<"Enter the temprature in the celcius : "<<endl;
     cin>>temp;
     if(temp > 35)
     {
        cout<<"Hot today."<<endl;
     }
     if(temp < 35 && temp > 25)
     {
        cout<<"Pleasent Day."<<endl;
     }
     else {
        cout<<"Cool today."<<endl;
     }


getch();
return (0);
}