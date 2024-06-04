// C++  Program to take a value from the user as input the basic salary of an employee and calculate its Gross salary according to the following: 
// Basic Salary <= 10000: HRA = 20%, DA = 80%………………………………..
// Basic Salary <= 20000 : HRA = 25%, DA = 90%
// ………………………………Basic Salary > 20000 : HRA = 30%, DA = 95%.....?
//important program....
#include<iostream>
using namespace std;

int main()
{
int basicsalary , hra,da,gross;
cout<<"Enter the basic salary of the employee : "<<endl;
cin>>basicsalary;
if(basicsalary<10000)
{
    hra=0.2*basicsalary;
    da=0.8*basicsalary;
}
if(basicsalary<=20000)
{
    hra=0.25*basicsalary;
    da=0.9*basicsalary;
}
if(basicsalary>20000)
{

    hra =0.3*basicsalary;
    da= 0.95*basicsalary; 
}
gross=basicsalary+hra+da;
cout<<"The gross salary of the employee is : "<<gross<<endl;

return (0);
}