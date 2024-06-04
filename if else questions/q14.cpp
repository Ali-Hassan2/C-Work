// wheather to check weather the number is negative , positive or zero by using nested if....??
#include<iostream>
using namespace std;

int main()
{
int n ; 
cout<<"Enter a number : "<<endl;
cin>>n;
if(n!=0)
{
    if(n>0)
    {
        cout<<"It is a positive integer."<<endl;
    }
    
    
        if(n<0)
        {
            cout<<"Entered number is negative integer.";
        }
}
else
{
    cout<<"The entered integer is zero."<<endl;
}

return (0);
}