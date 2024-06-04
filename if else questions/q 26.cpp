// C++  Program to take a value from the user as input the angles of a triangle and check whether the triangle is 
// valid or not by using the if-else statement. Triangle program...?? tum sy pocha 
#include<iostream>
using namespace std;

int main()
{
int angle1 , angle2 , angle3;
cout<<"Enter first angle : "<<endl;
cin>>angle1;
cout<<"Enter second angle : "<<endl;
cin>>angle2;
cout<<"Enter third angle : "<<endl;
cin>>angle3;
if(angle1+angle2+angle3==180)
{
    cout<<"It is a valid triangle. "<<endl;
}
else
{
    cout<<"The triangle is not a valid triangle."<<endl;
}
return (0);
}