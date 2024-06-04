#include<iostream>
using namespace std;
int main()
{
    for(int i = 1,k=0 ; i<=3 ; i++ , k=0)
    {
        for(int j=1 ; j<=3-i ; j++)
        {
            cout<<" ";
        }
        while(k!= 2*i-1)
        {
            cout<<"*";
            k++;
        }
        cout<<endl;
    
    }

    for(int i = 1 ; i<=3 ; i++)
    {
        for(int j = 1 ; j<=5 ; j++ )
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
    for(int i = 3 , k =0 ; i>= 1 ; i-- ,k=0)
    {
       for(int j = 1 ; j<=3-i ; j++)
       {
          cout<<" ";
       }
       while(k!=2*i-1)
       {
        cout<<"*";
        k++;
       }
       cout<<endl;
    }
}