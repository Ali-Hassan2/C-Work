// Write a program to print the circumference and area of a circle of
//  radius entered by user by defining your own function....??
#include<iostream>
using namespace std;
double circumference(double r)
{
   
   return 2 * 3.14 * r ;

}
double area (double r)
{
    
    return 3.14 * r * r;
}
int main()
{
    double radius ;
    cout<<"Enter the radius : "<<endl;
    cin>>radius;
cout<<"The circumference of the circle is : "<<circumference(radius)<<endl;
cout<<"The area of the circle is : "<<area(radius)<<endl;
return (0);
}