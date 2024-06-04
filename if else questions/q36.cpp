// Write a C++ program to swap the values of two numbers using if else statement....????
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


     int n1 , n2;
     cout<<"Enter the number 1 : "<<endl;
     cin>>n1;
     cout<<"Enter the number 2 : "<<endl;
     cin>>n2;
     if(n1==n2)
     {
        cout<<"They cannot be swaped because they are equal."<<endl;
     }
     else if (n1!=n2)
     {
        n2 = n2+n1;
        n1= n2 - n1;
        n2 = n2-n1;
        cout<<"After swaping two numbers : "<<endl;
        cout<<"The number 1 is : "<<n1<<endl;
        cout<<"The number 2 is : "<<n2<<endl;

     }


getch();
return (0);
}
