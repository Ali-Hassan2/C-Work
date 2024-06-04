// q12 from the book....???
#include<iostream>
#include<conio.h>
#include<math.h>
#include<climits>
using namespace std;
int main()
{


     int c , n;
     double sum = 0.0 , avg = 0.0;
    //  n = 1 ;
     c = 0;

    //  for (int i = 1 ; i != 9999 ; i++)
    while(n!=9999)
     {
             cout<<"Enter the number : "<<endl;
     cin>>n;
        if(n==9999)
        {
            break;
        }
        else
        {
            sum = sum + 1;
        }
        avg = sum/c;
        c++;
     }
     cout<<"The sum is = "<<sum<<endl;
     cout<<"The average is = "<<avg<<endl;


getch();
return (0);
}