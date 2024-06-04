// Write a program in C++ to find the sum of first 10 natural numbers.....????
#include<iostream>
using namespace std;

int main()
{
    int sum = 0 ;
for(int i = 0 ; i <= 10 ; i++)
{
    cout<<i<<endl;
    sum = sum+i;
}
cout<<"The sum is = "<<sum<<endl;
return (0);
}