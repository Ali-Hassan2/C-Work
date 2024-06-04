// C++ Source code to check triangle is an isosceles, equilateral, or scalene using if-else statement...???
#include<iostream>
using namespace std;

int main()
{
int s1 , s2 ,s3;
cout<<"Enter the side 1 : "<<endl;
cin>>s1;
cout<<"Enter the side 2 :"<<endl;
cin>>s2;
cout<<"Enter the side 3 :"<<endl;
cin>>s3;


if(s1==s3 && s2==s3)
{
    cout<<"The triangle is Equilateral. "<<endl;
}
if(s1==s2 || s1==s3 || s2==s3)
{
    cout<<"The triangle is issoslces."<<endl;
}
else{
    cout<<"The triangle is scalene."<<endl;
}
return (0);
}