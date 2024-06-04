// Write a program in C++ to display n terms of natural number and their sum......????
#include<iostream>
using namespace std;

int main()
{
int n , sum = 0 ;
cout<<"Enter a number : "<<endl;
cout<<"-----------------"<<endl;
cin>>n;
cout<<"-----------------"<<endl;
for(int i = 1 ; i <= n ; i++)
{

    cout<<i<<" ";

    sum=sum+i;
}

cout<<"The sum is = "<<sum<<endl;
return (0);
}