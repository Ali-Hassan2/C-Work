// C++  Program to take a value from the user as input all sides of a triangle and 
// check whether the triangle is valid or not. Using if-else......?????
#include<iostream>
using namespace std;

int main()
{
 int side1 , side2 , side3;
 cout<<"Enter the slide 1 : "<<endl;
 cin>>side1;
 cout<<"Enter the side 2 : "<<endl;
 cin>>side2;
 cout<<"Enter the side 3 : "<<endl;
 cin>>side3;
 if( side1 + side2 > side3 && side2 + side3 > side1 && side1 + side3 > side2)
 {
    cout<<"This is the valid triangle."<<endl;
 }
 else 
 {
    cout<<"The triangle is not valid."<<endl;
 }
return (0);
}