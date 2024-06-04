//take two values from user check the greater
#include<iostream>
using namespace std;

int main()
{
int a , b;
cout<<"Enter the first number : "<<endl;
cin>>a;
cout<<"Enter the second number : "<<endl;
cin>>b;
if(a>b)
{
    cout<<"First number "<<a<< " is greater.";
}
else
{
    cout<<"Second number "<<b<<" is greater.";
}
return (0);
}