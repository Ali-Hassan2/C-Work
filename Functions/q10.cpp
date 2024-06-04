// fibconnci series ..... ???
#include<iostream>
using namespace std;
int fib(int n)
{
    if(n<2)
    {
        return n;
    }
    return fib(n-2)+(n-1);
}
int main()
{
    int a;
    cout<<"Enter a number : "<<endl;
    cin>>a;
    cout<<"The Fib series of : "<<a<<" is "<<fib(a);

return (0);
}