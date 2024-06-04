// take 3 ages and determine the largest one....???
#include<iostream>
using namespace std;

int main()
{
int age1 ,age2, age3;
cout<<"Enter the age of first brother : "<<endl;
cin>>age1;
cout<<"Enter the age of Second brother : "<<endl;
cin>>age2;
cout<<"Enter the age of third brother : "<<endl;
cin>>age3;
if((age1>age2)&&(age1>age3))
{
    cout<<"------------------------------"<<endl;
    cout<<"First brother is elder."<<endl;
}
else if((age2 > age1)&&(age2>age3))
{
    cout<<"------------------------------"<<endl;
    cout<<"Second brother is elder."<<endl;
}
else
{
    cout<<"------------------------------"<<endl;
    cout<<"Third brother is elder."<<endl;
}
return (0);
}