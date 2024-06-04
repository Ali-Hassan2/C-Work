#include<Iostream>
using namespace std;
int main()
{
    int n;
    for(int i = 1,k=0 ; i<=5 ; i++ , k=0)
    {
        for(int j=1 ; j<=5-i ; j++)
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
}