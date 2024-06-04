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


     // declare an array practice[10] take input from user and declare another arraylogic[10]
     int practice[10];
     char arraylogic[10];
     for(int i = 0 ; i < 10 ; i++)
     {
        cout<<"Enter th value : "<<endl;
        cin>>practice[i];
     }
     for (int i = 0 ; i < 10 ; i++)
     {
        arraylogic[i] = (char)practice[i];
        cout<<arraylogic[i]<<endl;
     }


getch();
return (0);
}