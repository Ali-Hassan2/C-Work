// program to convert the given value in the absolute 
//e.g -1 converted to 1 
// Do not use any pre-defined function.....???
#include<iostream>
using namespace std;

int main()
{
int x;
cout<<"Enter the number : "<<endl;
cout<<"-------------------"<<endl;
cin>>x;
if(x<0)
{
    x=x*(-1);
    cout<<"---------------"<<endl;
    cout<<"The absolute value is : "<<x<<endl;
}
return (0);
}