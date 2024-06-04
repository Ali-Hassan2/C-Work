// Write a language program to get the volume of a sphere with radius 6. Go to the editor
// Sample Output:
// Calculate the volume of a sphere :
// ---------------------------------------
// Input the radius of a sphere : 5
// The volume of a sphere is : 523.333....????
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


     double rad  , vol;
     cout<<"Enter the radius of the sphere is : "<<endl;
     cin>>rad;
     vol = (4 * 3.14 * rad * rad) /3;
     cout<<"The volume is : "<<vol<<" ml "<<endl;


getch();
return (0);
}