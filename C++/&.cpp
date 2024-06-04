#include<iostream>
using namespace std;
int main()
{
    char y;
    cout<<"Enter the symbol :: "<<endl;
    cin>>y;
    for(int i = 1 ; i <= 8 ; i++)
    {
        for(int j = i ; j <= 8 ; j++)
        {
        cout<<" ";
        }
         for(int k = 1 ; k<= i ; k++)
            {
              cout<<y<<" ";
            }
         
        cout<<endl;
    }
}