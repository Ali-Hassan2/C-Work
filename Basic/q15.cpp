// Write a program in C++ to find the area and circumference of a circle. Go to the editor
// Sample Output:
// Find the area and circumference of any circle :
// ----------------------------------------------------
// Input the radius(1/2 of diameter) of a circle : 5
// The area of the circle is : 78.5397
// The circumference of the circle is : 31.4159.....???
#include<iostream>
using namespace std;
int main()
{


     double area , radius , circum;
     cout<<"PLease enter the radius of the circle : "<<endl;
     cin>>radius;
     area = 3.14 * ( radius * radius);
     circum = 2 * 3.14 * radius;
     cout<<"\nThe area of the circle is : "<<area<<endl;
     cout<<"-----------------------------------------"<<endl;
     cout<<"\nThe circumference of the circle is : "<<circum<<endl;


return (0);
}