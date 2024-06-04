#include<iostream>
using namespace std;
int main()
{
    int sum=0,n;
    cout<<"enter a number."<<endl;
    cin>>n;
    int i=1;
    while( i<=n)
    {cout<<i<<endl;
    sum = sum+i;
    i++;
    
    }
    cout<<"The sum is equal to : "<<sum<<endl;
}