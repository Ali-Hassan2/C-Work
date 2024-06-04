#include<iostream>
using namespace std;
int main()
{
    int time,minutes ,hours , seconds;
    cout<<"Enter the time in seconds."<<endl;
    cin>>time;
    hours=time/3600;
    time=time%3600;
    minutes = time/60;
    time = time%60;
    seconds=time;
    cout<<"The time is : "<<hours<<" : "<<minutes<<" : "<<seconds<<endl;
    return 0;
}