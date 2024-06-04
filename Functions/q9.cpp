// Write a program using the C++ programming language to print all the prime numbers between
//  two given numbers by creating a function.....???
#include<iostream>
using namespace std;
bool isprime(int x)
{
    for(int i = 2 ; i < x ; i++)
    {
        if(x%i==0)
        {
          return false;
        }
        
    }
    
    return true;
}
int main()
{
    int a , b ;
cout<<"Enter a first number : "<<endl;
cin>>a;
cout<<"Enter a second number : "<<endl;    
cin>>b;
for( int i = a ; i < b ; i++)
{
    if(isprime(i))
    cout<<i<<endl;
}
return (0);
}