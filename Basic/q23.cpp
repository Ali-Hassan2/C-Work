// Write a program in C++ to find the area of Scalene Triangle. Go to the editor
// Sample Output:
// Find the area of Scalene Triangle :
// ----------------------------------------
// Input the length of a side of the triangle : 5
// Input the length of another side of the triangle : 6
// Input the angle between these sides of the triangle : 6
// The area of the Scalene Triangle is : 1.56793.....???
#include<iostream>
#include<conio.h>
#include<math.h>
#include<unistd.h>
#include<stdlib.h>
using namespace std;
int main()
{


     double side1 , side2 , angle , area;
     cout<<"Enter the side 1 of the triangle : "<<endl;
     cin>>side1;
     cout<<"Enter the side 2 of the triangle : "<<endl;
     cin>>side2;
     cout<<"Enter the angle between them : "<<endl;
     cin>>angle;
     area = (side1 * side2 * sin((3.14 / 180 ) * angle) )/2;

     cout<<"The area of the scalane triangle is : "<<area<<endl;


getch();
return (0);
}