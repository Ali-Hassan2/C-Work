#include<iostream>
using namespace std;
int main()
{
double alpha[50];
for (int i = 0 ; i < 25 ; i++)
{
    alpha[i] = i * i;
}
for (int j = 25 ; j < 50 ; j++ )
{
    alpha[j] = j * j * j;
}
cout<<"\n\n======================================\n"<<endl;
cout<<"The first 10 elements are : \n"<<endl;
for (int k = 0 ; k < 10 ; k++)
{
    cout<<alpha[k]<<" , ";
}
cout<<endl;
cout<<"\n\n======================================\n"<<endl;
cout<<"The next 10 elements are : \n"<<endl;
for(int k = 10 ;  k < 20 ; k++)
{
    cout<<alpha[k]<<" , ";
}
cout<<"\n\n======================================\n"<<endl;
cout<<"The next from 20 elements are : \n"<<endl;
for(int k = 20  ;k < 30 ; k++)
{
    cout<<alpha[k]<<" , ";
}
cout<<"\n\n======================================\n"<<endl;
cout<<"The next 10 element from 30 are : \n"<<endl;
for(int k = 30 ; k < 40 ; k++)
{
    cout<<alpha[k]<<" , ";
}
cout<<"\n\n======================================\n"<<endl;
cout<<"The last 10 elements are : \n"<<endl;
for(int k = 40 ; k < 50 ; k++)
{
    cout<<alpha[k]<<" , ";
}
cout<<"\n\n======================================\n"<<endl;


    return(0);
}