#include<iostream>
using namespace std;
int   sum(int a , int b);
//so i will give the defination before the main()
int main()
{
// in this i will learn about function prototyping 
// so it is basically a defination or reshowness of function before the main function
//now i write a function at the outside of main
int n1,n2;
cout<<"Enter a 1st number : "<<endl;
cin>>n1;
cout<<"Enter a second number : "<<endl;
cin>>n2;
cout<<"The sum is : "<<sum(n1 , n2);
return (0);
}
int sum(int a , int b)
{
    int c;
    c=a+b;
    return c;
    // so they are the value returning functions except void function all the functions are the value returning
    // and void is non value returning
}