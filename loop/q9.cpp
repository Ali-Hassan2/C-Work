//  Write a program in C++ to find the Greatest Common Divisor (GCD) of two numbers. Go to the editor
// Sample Output:
// Input the first number: 25
// Input the second number: 15
// The Greatest Common Divisor is: 5
#include<iostream>
using namespace std;

int main()
{
int n1, n2 , gcd;
cout<<"Enter the first number : "<<endl;
cout<<"-------------------------"<<endl;
cout<<"-------------------------"<<endl;
cin>>n1;
cout<<"Enter the second number : "<<endl;
cout<<"--------------------------"<<endl;
cout<<"--------------------------"<<endl;
cin>>n2;
for ( int  i = 1 ; i <= n1 && i <= n2 ; i++)
{
    if(n1 % i == 0 && n2 % i == 0)
    {
        gcd = i ;
        
    }
}
cout<<"The greater common dividor is : "<<gcd<<endl;
return (0);
}