// Define a function that returns the product of two numbers entered by user....??
#include<iostream>
using namespace std;
int product(int a , int b)
{
    int c ; 
    c = a*b;
    return c;
}

int main()
{
    int n1 , n2 ;
    cout<<"Enter first number : "<<endl;
    cin>>n1;
    cout<<"Enter a second number : "<<endl;
    cin>>n2;
    cout<<"The product of two numbers is = "<<product(n1 , n2);

return (0);
}