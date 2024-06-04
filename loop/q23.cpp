//Fibonacci series
#include<iostream>
#include<conio.h>
#include<math.h>
#include<climits>
using namespace std;
int main()
{


     int a , b , next , limit;
     cout<<"Enter the limit for which you want to print Fibonacci Series : "<<endl;
     cin>>limit;
     a = 0;
     b = 1;
     cout<<"The Fibonacci Series upto Limits are : "<<endl;
     cout<<a<<"\t"<<b;
     next = a + b;
     while(next < limit)
     {
        next = a + b;
        cout<<"\t"<<next;
        a = b;
        b = next;
        next = a+b;
     }  


getch();
return (0);
}