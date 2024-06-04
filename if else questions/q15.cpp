// A program that takes units as input from the user, and unit rates are assigned by the programmer and the program calculates the electricity bill.
#include<iostream>
using namespace std;

int main()
{
    cout<<"----------------------------------------------------------------------"<<endl;
    cout<<"The bill has units below than 250 is according to rate 1 = 5 per unit."<<endl;
    cout<<"The bill has units above than 250 is according to rate 2 = 10 per unit."<<endl;
int rate1 , rate2 , bill , units;
rate1 = 5 ;
rate2 = 10 ;
//if units below than 250 then use rate1 otherwise use rate2
cout<<"-------------------------------------"<<endl;
cout<<"Enetr the units consumed by client : "<<endl;
cout<<"-------------------------------------"<<endl;
cin>>units;
if(units<250)
{
    bill = rate1*units;
    cout<<"------------------------------"<<endl;
    cout<<"The bill is : "<<bill<<endl;
}
else
{
    bill = rate2*units;
    cout<<"------------------------------"<<endl;
    cout<<"The bill is : "<<bill<<endl;
}

return (0);
}