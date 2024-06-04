// write a program to add first seven terms of the folloeing sequence:
// 1/1! + 2/2! + 3/3!...
#include<iostream>
#include<conio.h>
#include<math.h>
#include<climits>
using namespace std;
int main()
{


     double sum , fact = 1, n;
     cout<<"Enter the number : "<<endl;
     cin>>n; 
     for (int i = 1 ; i <= 7 ; i++)
     {
        for (int j = 1 ; j < i ; j++)
        {
            fact = fact*i;
            sum = sum+j/fact;
        }
        
     }
     cout<<"The factorial of the number is "<<sum<<endl;


getch();
return (0);
}