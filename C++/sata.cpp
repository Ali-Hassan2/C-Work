#include<iostream>
using namespace std;

int main()
{
    
for(int i = 1, k= 0; i<=5 ; i++,k=0)
{
    for(int j =-4; j<=5-i ; j++)
    {
        cout<<" ";
    }
    while(k!=2*i-2)
    {
        cout<<"*";
        k++;
    } 
cout<<endl;
}
for(int i = 9 , k = 0 ; i>=7 ; i-- , k=0)
{
    for(int j  = 1 ; j<= 10 - i ; j++)
    {
        cout<<" ";
    }
    while(k!=2*i-1)
    {
        cout<<"*";
        k++;
    }
    cout<<endl;
}
for(int i = 7,k=0 ; i <=9 ; i++,k=0)
{
    for(int j = 1 ; j <= 10-i ; j++)
    {
        cout<<" ";
    }
    while(k!=2*i-1)
    {
        cout<<"*";
        k++;
    }
    cout<<endl;
}
return (0);
}