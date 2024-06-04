// Write a program in C++ to print the area of a polygon. Go to the editor
// Sample Output:
// Print the area of a polygon:
// ---------------------------------
// Input the number of sides of the polygon: 7
// Input the length of each side of the polygon: 6
// The area of the polygon is: 130.821.................??????????????????
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


     double sid , leng , area;
     cout<<"Enter the sides of the polygon : "<<endl;
     cin>>sid;
     cout<<"Enter the length of each side : "<<endl;
     cin>>leng;
     area = (leng * (sid * sid)) / (4.0 * tan((M_PI / leng)));
     cout<<"The area of the polygon is : "<<area<<endl;
     


getch();
return (0);
}