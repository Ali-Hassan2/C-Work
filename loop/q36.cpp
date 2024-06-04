// sum the series 1/2 + 2/3 + 3/4 +.......+ 99/100
#include<iostream>
#include<conio.h>
#include<math.h>
#include<climits>
using namespace std;
int main()
{


     int i ;
     double sum = 0;
     for(i = 1 ; i <= 99 ; i++)
     {
        sum = sum + (i * 1.0/(i+1));
     }
     cout<<"The sum of the series is : "<<sum<<endl;


getch();
return (0);
}