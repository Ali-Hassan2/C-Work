// entered a positive integer and if negative integer enytered then statement not shown this program include 0 as positive....???
#include<iostream>
using namespace std;

int main()
{
int x;
cout<<"Enter a number : "<<endl;
cin>>x;
if(x>=0)
{
    cout<<"Entered number is a positive integer."<<endl;
    cout<<"-------------------------------------"<<endl;
    cout<<"This statment always be executed."<<endl;
}
return (0);
}