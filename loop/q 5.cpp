// to check weather a prime number or not.....????
#include<iostream>
using namespace std;

int main()
{
int n , pri = 0;
cout<<"Enter a number : "<<endl;
cout<<"-----------------"<<endl;
cout<<"-----------------"<<endl;
cin>>n;
for(int i = 1 ; i <= n ; i++)
{
    if(n % i == 0)
    {
        pri++;
    }
}
    if(pri == 2)
    {
      cout<<"Entered number is a prime number."<<endl;  
    }
    else
    {
      cout<<"Entered number is not a prime number."<<endl;  
    }

return (0);
}