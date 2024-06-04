// 10 values from keyboard and show their sum and average 
#include<iostream>
using namespace std;

int main()
{
int n , sum = 0 ;
double avg = 0 ;
for(int i = 1 ; i <= 10 ; i++)
{
    cout<<"Enter the number : "<<endl;
    cin>>n;
    sum = sum+i; 
}
cout<<"The sum is : "<<sum<<endl;
avg = sum/10;
cout<<"------------------------------------"<<endl;
cout<<"------------------------------------"<<endl;
cout<<"The average of the ten numbers is : "<<avg<<endl;
return (0);
}