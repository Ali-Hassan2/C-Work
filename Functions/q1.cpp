// Write a program to print the sum of two numbers entered by user by defining your own function...??
#include<iostream>
using namespace std;
int sum(int a, int b)
{
    int c;
    c=a+b;
    return c;
}

int main()
{
    int n1 , n2 ;
    cout<<"Enter a number : "<<endl;
    cin>>n1;
    cout<<"Enter a second number : "<<endl;
    cin>>n2;
    cout<<"The sum of two numbers is = "<<sum(n1,n2);


return (0);
}