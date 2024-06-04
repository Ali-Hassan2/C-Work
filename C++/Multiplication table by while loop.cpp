#include<iostream>

using namespace std;
int main()
{
    int a = 1,num;
    cout<<"Please enter a number : "<<endl;
    cin>>num;
    while(a<=10)
    {
      cout<<num<<" * "<<a<<" = "<<num*a<<endl;

      a++;
    }
    return 0;

    }
