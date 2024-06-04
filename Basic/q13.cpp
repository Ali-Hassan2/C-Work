// Write a program in C++ to find the Area and Perimeter of a Rectangle. Go to the editor
// Sample Output:
// Find the Area and Perimeter of a Rectangle :
// -------------------------------------------------
// Input the length of the rectangle : 10
// Input the width of the rectangle : 15
// The area of the rectangle is : 150
// The perimeter of the rectangle is : 50......????
#include<iostream>
using namespace std;
int main()
{


     double wid , hgt , area , pri;
     cout<<"Enter the width of the rectangle : "<<endl;
     cin>>wid;
     cout<<"Enter the height of the rectangle : "<<endl;
     cin>>hgt;
     area = (wid*hgt);
     pri = 2*(hgt + wid);
     
cout<<"The area of the rectangle is : "<<area<<endl;
cout<<"-------------------------------"<<endl;
cout<<"The perimeter of the rectangle is : "<<pri<<endl;

return (0);
}