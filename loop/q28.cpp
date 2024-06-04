// prime numbers 
#include<iostream>
#include<conio.h>
#include<math.h>
#include<climits>
using namespace std;
int main()
{


     int n , p , i ,j;
     cout<<"Enter the number for which you want to print the prime numbers : "<<endl;
     cin>>n;
     cout<<"The list of prime numbers is as follow : "<<endl;
     for ( i = 1 ; i <= n ; i++)
     {
        p = 1;
        for ( j = 2 ; j <= i/2 ; j++)
        { 
            if (i%j==0)
            {
                p = 0;
                break;
            }


        }
                    if(p==1)
            {
                cout<<i<<"\t";
            }
     }


getch();
return (0);
}