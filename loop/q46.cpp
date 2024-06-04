//write a program to the sum of the 1/3! + 5/4! + 9/5!....?????
#include<iostream>
#include<conio.h>
#include<math.h>
#include<climits>
using namespace std;
int main()
{


     double sum;
     int d , fact = 1 , i , j;
     d = 1;
     for ( i = 3 ; i  <= 11 ;i++)
     {
        for (j = 1 ; j < i ; j++)
        {
            fact = fact*j;
            sum = sum + d/fact;
              d = d + 4;
        }
        
     }
     cout<<"The sum of the series is : "<<sum<<endl;


getch();
return (0);
}