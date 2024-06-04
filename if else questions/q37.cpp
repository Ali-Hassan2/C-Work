// Program to update even number into its upper nearest odd number. C++ Program to update even to odd....????
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


     int n;
     cout<<"Enter the number : "<<endl;
     cin>>n;
     if(n%2==0)
     {
        cout<<"The nearest odd number from even is : "<<endl;
        cout<<n+1<<endl;
     }
     else
     {
        cout<<"The nearest upper even number from odd is : "<<endl;
        cout<<n-1<<endl;

     }


getch();
return (0);
}