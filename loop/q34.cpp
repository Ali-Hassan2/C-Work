// the sum of the factorials 1! + 2! + 3! + 4! + 5!.  
#include<iostream>
#include<conio.h>
#include<math.h>
#include<climits>
using namespace std;
int main()
{


     int i , j , n;
     int sum = 0 , fact;
    //  cout<<"Enter the number of the factorials you want to sum : "<<endl;
    //  cin>>n;
     for( i = 1 ; i<5 ; i++)
     {
        fact = 1;
        for ( j = i ; j >= 1 ; j--)
        {
            fact = fact * j;
            sum = sum + fact;
        }
     }
     cout<<"The sum of the factorials is : "<<sum<<endl;


getch();
return (0);
}