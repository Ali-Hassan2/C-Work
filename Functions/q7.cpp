// Define a function to find out if number is prime or not......???
#include<iostream>
using namespace std;
bool prime(int x)
{
    for(int i  = 2 ; i < x ; i++)
    {
        if(x%i==0)
        {
            return false;
        }
        
    }
    return true;
}
int main()
{
    int n;
    cout<<"Enter a number : "<<endl;
    cin>>n;
    cout<<prime(n);

return (0);
}