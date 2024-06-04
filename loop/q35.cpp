//1+2x+3x2+4x3+5x4 the sum of the series
#include<iostream>
#include<conio.h>
#include<math.h>
#include<climits>
using namespace std;
int main()
{


     int x, res , i;
     long sum = 1;
     cout<<"Enter the value in the x : "<<endl;
     cin>>x;
     for ( i = 1 ; i <= 4 ;i++)
     {
        res = (i+1) * pow(x , i);
        sum = sum + res;
     }
cout<<"The sum of the series is : "<<sum<<endl;

getch();
return (0);
}