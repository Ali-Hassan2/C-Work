// factorial by function......???
#include<iostream>
using namespace std;
int fact(int n)
{
    if(n<=1)
    {
        return 1;
    }
    return n * fact(n-1);
}
int main()
{
    int a;
    cout<<"Enter a number : "<<endl;
    cin>>a;
    cout<<"The factorial of "<<a<<" is = "<<fact(a)<<endl;

return (0);
}