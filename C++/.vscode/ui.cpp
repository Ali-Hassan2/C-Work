#include<iostream>
using namespace std;
int main()
{
    int pv=0,ne=0,zv=0,n;
    while(true)
    {
        cout<<"Enter a number 0 to stop."<<endl;
        cin>>n;
        if(n<0)
        {
            ne++;
        
        if(n>0)
        {
            pv++;
        }
        if(n==0)
        {
            zv++;
        }
        }
        else(n==0)
        break;
    }
    cout<<"The positive numbers are ; "<<pv<<endl;
    cout<<"The negative numbers are ; "<<ne<<endl;
    cout<<"The Zero counts numbers are ; "<<zv<<endl;
return 0;}