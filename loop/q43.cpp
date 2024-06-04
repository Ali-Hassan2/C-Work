// to calculate the sum of first n integers...
#include<iostream>
#include<conio.h>
#include<math.h>
#include<climits>
using namespace std;
int main()
{


     int sum = 0 ;
     int num = 1;
     int n;
     cout<<"Enter the number of  integers : "<<endl;
     cin>>n;
     for (int i = 1 ; i <= n ; i++)
     {
        sum = sum + num;
        num = num + 2;

     }
     cout<<"The sum of : "<<n<<" integers is : "<<sum<<endl;


getch();
return (0);
}