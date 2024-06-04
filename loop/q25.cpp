//perfect numbers 
#include<iostream>
#include<conio.h>
#include<math.h>
#include<climits>
using namespace std;
int main()
{


     int i , num , mid ,limit , sum;
     cout<<"Enter the limit of the numbers : "<<endl;
     cin>>limit;
     if(limit < 6)
     {
        cout<<"No perfect numbers between them."<<endl;
     }
     else
     {
        for (num = 6 ; num <= limit ; num++)
        {
            sum = 0 ;
            mid = num / 2;
            for (i = 1 ; i <= mid ; i++)
            {
                if( (num %i )== 0)
                {
                    sum = sum + i;
                }
            }
                    if(sum == num)
        {
            cout<<num<<endl;
        }
        }


     }


getch();
return (0);
}