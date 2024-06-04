#include<iostream>
using namespace std;
int main()
{
    int pas;
cout<<"Enter the password : "<<endl;
cin>>pas;
if(pas == 45)
{
     int a , b;
cout<<"Enter the value of a : "<<endl;
cin>>a;
cout<<"Enter the value of b : "<<endl;     
cin>>b;
cout<<"The sum of a and b is : "<<a+b<<endl;
}
else{
    cout<<"Invalid password."<<endl;
}

return (0);
}