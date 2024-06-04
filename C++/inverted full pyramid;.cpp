#include<iostream>
using namespace std;
int main()
{
    for(int i =5,k=0 ; i>=1 ; i--,k = 0) /// number of colums
    {
        for(int j =1 ; j<=5-i ; j++) //number of rows 
        {
            cout<<" ";
        }
        while(k!= 2*i - 1)
        {
            cout<<"*";
            k++;
        }
        cout<<endl;
    }   
}