// printing armstrong numbers
#include<iostream>
#include<conio.h>
#include<math.h>
#include<climits>
using namespace std;
int main()
{


     int n , r ,i , sum ,limit;
     cout<<"Enter the number for which ypu want to print the armstrong numbers : "<<endl;
     cin>>limit;
     for(i = 1 ; i <= limit ; i++ )
     {
        n = i;
        sum = 0 ;
        while(n!=0)
        {
            r = n % 10;
            sum = sum + (r*r*r);
            n/=10;
        }
        if(sum == i)
        {
            cout<<i<<endl;
        }

     }


getch();
return (0);
}