// Define a program to find out whether a given number is even or odd.....????
#include<iostream>
using namespace std;
void eo(int n)
{
    if(n%2==0)
    {
        cout<<"The number is even."<<endl;
    }
    else
    {
        cout<<"The number is odd."<<endl;
    }
}
int main()
{
    int a;
    cout<<"Enter a number : "<<endl;
    cin>>a;
    eo(a);

return (0);
}