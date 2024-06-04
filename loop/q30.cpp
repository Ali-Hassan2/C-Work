//wheather it is prime or not....????
#include<iostream>
#include<conio.h>
#include<math.h>
#include<climits>
using namespace std;
int main()
{


     int n ,p , i ;
     cout<<"Enter the number :"<<endl;
     cin>>n;
     p =1;
     for (i = 2 ; i < n ; i++)
     {
        
        if ((n%i)==0)
        {
             p = 0 ;
             break;
        }

     }
     if (p==1)
     {
        cout<<"It is a prime number. "<<endl;
     }
     else 
     {
        cout<<"Not a prime number."<<endl;
     }


getch();
return (0);
}