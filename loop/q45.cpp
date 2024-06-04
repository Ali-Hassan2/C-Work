// wirte a program that calculate the sum of the every 3rd integer starting from the 2 and into 100...
#include<iostream>
#include<conio.h>
#include<math.h>
#include<climits>
using namespace std;
int main()
{


    //  int sum = 0 ;
    //  for (int  i = 2 ; i  < 100 ; i = i+3)
    //  {
    //     sum = sum + i;

    //  }
    //  cout<<"The sum of the series is = "<<sum<<endl;

    // by using while loop
// int sum = 0;
// int i = 2 ; 
// while(i<100)
// {
//     sum = sum + i;
//     i = i+3;
// }
// cout<<"The sum of the series is = "<<sum<<endl;

// by using the do while loop
int sum = 0 ; 
int i = 2;
do 
{
    sum = sum+i;
    i = i + 3;
}while(i < 100);
cout<<"The sum is = "<<sum<<endl;

getch();
return (0);
}