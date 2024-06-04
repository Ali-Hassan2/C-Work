
// q27 from the book
#include<iostream>
#include<conio.h>
#include<math.h>
#include<climits>
#include<iomanip>
using namespace std;
int main()
{
double p , r , a;
p = 1000;
r = 0.05;

cout.setf(ios :: fixed , ios :: floatfield);
cout<<setprecision(2);
for(int i = 1 ; i < 10 ; i++)
{
    a = p*pow(1+r , i);
     cout<<"Amount at the end of year is : "<<i<<" : "<<a<<endl;
}


     


getch();
return (0);
}