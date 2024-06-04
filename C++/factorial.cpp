#include<iostream>
using namespace std;
int main()
{
    int fact=0,n ;
    cout<<"Enter number."<<endl;
    cin>>n;
    for(int i=1; i<=n ; i++)
    {
         fact*=i;
    }
    cout<<"The factorial is "<<fact<<endl;
}