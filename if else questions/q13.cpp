// wheather to check weather the number is negative , positive or zero....??
#include<iostream>
using namespace std;

int main()
{
int n;
cout<<"Enter a number : "<<endl;
cin>>n;
if(n<0)
{
    cout<<"----------------------------"<<endl;
    cout<<"The number is negative integer.";
}
if(n>0)
{
    cout<<"----------------------------"<<endl;
    cout<<"The number is positive integer.";
}
else if(n==0)
{
    cout<<"----------------------------"<<endl;
    cout<<"The entered number is zero.";
}
return (0);
}