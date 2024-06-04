//  Write a program in C++ to print the area and perimeter of a rectangle. Go to the editor
// Sample Output:
// Print the area and perimeter of a rectangle:
// ----------------------------------------------
// Input the width of the rectangle: 8.5
// Input the height of the rectangle: 5.6
// The area of the rectangle is: 47.6
// The perimeter of the rectangle is: 28.2....????
#include<iostream>
#include<conio.h>
#include<math.h>
#include<unistd.h>
#include<stdlib.h>
#include<ctime>
#include<iomanip>
using namespace std;
int main()
{

double  wid , hgt;
double area , per;
     cout<<"Enter the width of the rectangle : "<<endl;
     cin>>wid;
     cout<<"Enter the height of the rectangle : "<<endl;
     cin>>hgt;
     area = (wid * hgt);
     per = 2 * (wid + hgt);

     cout<<"The area of the rectangle is :  "<<area<<endl;
     cout<<"The perimeter of the rectangle is : "<<per<<endl;



getch();
return (0);
}