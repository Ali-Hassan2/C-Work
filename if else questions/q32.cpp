// prime or composite .......???????
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


     int n , c = 0 ;
     cout<<"Enter the number : "<<endl;
     cin>>n;
     for(int i = 1 ; i <= n ; i++)
     {
        if(n%i==0)
        {
            c=c+1;
        }
     }
     if(c == 2)
     {
        cout<<"The number is prime number."<<endl;
     }
     else
     {
        cout<<"The number is composit."<<endl;
     }


getch();
return (0);
}