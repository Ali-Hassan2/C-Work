// a company decided to give bonus to his employe of 5% if service of year is more then 5 years
// ask the user to enter the salary and year of service and count their salry with bounus
#include<iostream>
using namespace std;

int main()
{
int sy , salary;
cout<<"Enter the salary of the employe : "<<endl;
cin>>salary;
cout<<"Enetr the service year : "<<endl;
cin>>sy;
if(sy>5)
{
    cout<<"The total salary is : "<<salary+(salary*0.5)<<endl;
    
}
else{
cout<<"No bonus will be awarded."<<endl;
cout<<"The total salary is : "<<salary<<endl;
}
return (0);
}