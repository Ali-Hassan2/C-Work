#include<iostream>
using namespace std;
int main()
{
    int i=1,sum=0;
    while(i<=10)
    {
        cout<<i<<endl;
        sum+=i;
        i++;
    }
    cout<<"The sum of first 10 numbers ="<<sum<<endl;
    return 0;
}