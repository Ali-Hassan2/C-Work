// C++  Program to calculate profit or loss. Using if-else.....?????
#include<iostream>
using namespace std;

int main()
{
int selling_price , cost;
cout<<"Enter the cost : "<<endl;
cin>>cost;
cout<<"Enter the selling price : "<<endl;
cin>>selling_price;
if(selling_price > cost)
{
    cout<<"You earned a profit."<<endl;
}
else if (selling_price < cost)
{
    cout<<"You have a loss."<<endl;
}
else
{
    cout<<"NO PROFIT AND NO LOSS."<<endl;
}
return (0);
}