#include<iostream>
using namespace std;
int main()
{
    int n,i=1,sum=0;
    double avg=0;
    while(i<=10)
    {
        cout<<"Enter a number : "<<endl;
        cin>>n;
    
    sum+=n;
    i++;
    }
    avg=sum/10.0;
    avg= float(avg);
    cout<<"The sum of natural numbers is = "<<sum<<endl;
    cout<<"The average of natural numbers is = "<<avg<<endl;
    return 0;
}