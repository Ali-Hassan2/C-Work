// sum of the series x + x2 + x3 +.......+xn....????
#include<iostream>
#include<conio.h>
#include<math.h>
#include<climits>
using namespace std;
int main()
{


     int x , n ;
     long sum = 0;
     cout<<"Enter the value in the x : "<<endl;
     cin>>x;
     cout<<"Enter the number : "<<endl;
     cin>>n;
     for (int i =0 ; i < n ; i++ )
     {
        sum = sum + pow(x , i);
     }
     cout<<"The sum of the series x+x2+x3+....+xn is : "<<sum<<endl;



getch();
return (0);
}