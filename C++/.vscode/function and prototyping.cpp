#include<iostream>
using namespace std;
// basically function is a process of breaking down program into pieces 
//to take differnt type of works
// so i am creating a fuction for sum so
// syntax : data type function_name(arguments)
int sum(int a , int b)
{
int c;
c=a+b;
return c;
}
// so i will take any type of sum in the main function by calling this function
int main()
{
int n1 , n2;
cout<<"Enter a number : "<<endl;
cin>>n1;
cout<<"Enter a second number :"<<endl;
cin>>n2;
cout<<"The sum is : "<<sum(n1,n2);
// so n1 and n2 are the actual values and a , b are formal parameters
return (0);
}