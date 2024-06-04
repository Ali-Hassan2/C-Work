#include<iostream>
using namespace std;
int main()
{
       for(int i = 2 ; i <= 4 ;  i++)
      {
    for(int j =i ; j<4 ; j++ )
    {
        cout<<" ";
    }
    for(int k = 1 ; k <= i ; k++)
    {
        cout<<"*";
    }
    cout<<endl;
   }
}
