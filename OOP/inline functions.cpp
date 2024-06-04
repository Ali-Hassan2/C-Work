#include<iostream>

using namespace std;
// So basically if i will not use the inline function then at every call it will make the copys for the 
// single call of that function and if i use the inine keyword then it will expand the line of the 
// function calling
inline int product(int a , int b)
{
    return a * b;
}
int main()
{
     int a , b;
     cout<<"Enter the value of a : "<<endl;
     cin>>a;
     cout<<"Enter the value of b : "<<endl;
     cin>>b;
     cout<<"The product is : "<<product(a,b)<<endl;
     cout<<"The product is : "<<product(a,b)<<endl;
     cout<<"The product is : "<<product(a,b)<<endl;
     cout<<"The product is : "<<product(a,b)<<endl;
     cout<<"The product is : "<<product(a,b)<<endl;
     cout<<"The product is : "<<product(a,b)<<endl;
     cout<<"The product is : "<<product(a,b)<<endl;
     cout<<"The product is : "<<product(a,b)<<endl;

return (0);
}