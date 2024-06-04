// ar= (6*(s*s))/(4*tan(M_PI/6));......??????
// Write a program in C++ to print the area of a hexagon. Go to the editor
// Sample Output:
// Print the area of a hexagon:
// ---------------------------------
// Input the side of the hexagon: 6
// The area of the hexagon is: 93.5307.........???????
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


     double sid , area;
     cout<<"Enter the side of the hexagon : "<<endl;
     cin>>sid;
area = (6*(sid*sid))/(4*tan(M_PI/6));
cout<<"The area of the hexagon is : "<<area<<endl;


getch();
return (0);
}