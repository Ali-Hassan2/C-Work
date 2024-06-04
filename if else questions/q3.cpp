// a shop give 10% discount if the cost is more then 1000
//ask user for quantity
//suppose one unit will cost 100
// judge and print total cost?
#include<iostream>
using namespace std;

int main()
{
int cost , quantity;
cout<<"Enter the quantity  in units : "<<endl;
cin>>quantity;
cost=quantity*100;
if(cost > 1000)
{
    
    cout<<"The total cost is : "<<cost-(cost*.1)<<endl;
}
else
{
    cout<<"The total cost is : "<<cost<<endl;
}
return (0);
}