#include<iostream>
using namespace std;
int main()
{
    int n,i=0;
    cout<<"Enter the number : "<<endl;
    cin>>n;
    int sum=0;
    while(i<=n){
    cout<<i<<endl;
    
    sum+=i;
    i++;
    }
    cout<<"The sum of the natural numbers is = "<<sum<<endl;


    return 0;
}