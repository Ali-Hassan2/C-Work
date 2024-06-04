#include<iostream>
using namespace std;
int main()
{
    int  st = 3 , sp = 3 , st2 = 10 ;
    for(int i = 5 ; i >=st  ; i--)
    {
        for(int j = 1 ; j <=sp ; j++)
        {
            cout<<" ";
        }
        for(int k =st ; k<=1 ; k--)
        {
            cout<<"* ";
        }
        for(int j = 1 ; j < sp ; j++)
        {
            cout<<"  ";
        }
        for(int k = st ; k>=1 ; k--)
        {
            cout<<"* ";
        }
        cout<<endl;
        sp++;
        st--;

        
    }
}