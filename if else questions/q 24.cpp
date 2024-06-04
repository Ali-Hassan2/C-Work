// C++  Program to check whether a number is divisible by 5 and 11 or not by using if-else.
//  The number is divisible by 11 or 5 or not...??
#include<iostream>
using namespace std;

int main()
{
int n ;
 cout<<"Enter a number : "<<endl;
 cin>>n;
 if ((n%5==0)&&(n%11==0))
 {
    cout<<"------------------------------------"<<endl;
    cout<<"The number is divisible of 5 and 11."<<endl;
 }
return (0);
}