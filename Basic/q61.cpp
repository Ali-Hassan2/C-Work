// q14 from the book
#include<iostream>
#include<conio.h>
#include<math.h>
#include<climits>
using namespace std;
int main()
{


     int sal , itrate;
     double itax, netsalary = 0 ;
cout<<"Enter the salary of the employee : "<<endl;
cin>>sal;
if (sal > 30000)
{
    itax= sal * 20 /100;
    itrate = 20;
}
else if (sal >=20000)
{
    itax = sal * 15 / 100;
    itrate = 15;
}
else
{
    itax = sal * 10 / 100;
    itrate = 10;
}
netsalary = sal - itax;

cout<<"Your salary in RS is : "<<sal<<"/-"<<endl;

cout<<"Your Income tax is @ is : "<<itrate<<" and : "<<itax<<endl;

cout<<"Your Net salary is : "<<netsalary<<endl;

getch();
return (0);
}
// q14 from the book
#include<iostream>
#include<conio.h>
#include<math.h>
#include<climits>
using namespace std;
int main()
{


     int sal , itrate;
     double itax, netsalary = 0 ;
cout<<"Enter the salary of the employee : "<<endl;
cin>>sal;
if (sal > 30000)
{
    itax= sal * 20 /100;
    itrate = 20;
}
else if (sal >=20000)
{
    itax = sal * 15 / 100;
    itrate = 15;
}
else
{
    itax = sal * 10 / 100;
    itrate = 10;
}
netsalary = sal - itax;

cout<<"Your salary in RS is : "<<sal<<"/-"<<endl;

cout<<"Your Income tax is @ is : "<<itrate<<" and : "<<itax<<endl;

cout<<"Your Net salary is : "<<netsalary<<endl;

getch();
return (0);
}