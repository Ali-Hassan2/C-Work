// for finding maximum b/w three numbers without any operater......???
#include<iostream>
using namespace std;

int main()
{
int a, b , c ;
cout<<"---------------------------"<<endl;
cout<<"Enter a first number : "<<endl;
cin>>a;
cout<<"Enter a second number : "<<endl;
cin>>b;
cout<<"Enter a third number : "<<endl;
cin>>c;
//suppose maximum is a
int max;
max=a;
if(b>max)
{
    max=b;
}
if(c>max)
{
    max=c;
}
cout<<"The maximum number is : "<<max<<endl;
return (0);
}