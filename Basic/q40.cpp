//  Write a program in C++ to calculate the volume of a Cone. Go to the editor
// Sample Input: 5 3
// Sample Output:
// Input Cone's radius: Input Cone's height: The volume of the cone is: 78.5397......??????
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


     double hgt , rad , vol;
     cout<<"Enter the radius of cone : "<<endl;
     cin>>rad;
     cout<<"Enter the height : "<<endl;
     cin>>hgt;
     vol = ( 1.0 / 3.0 ) * 3.14 * (rad * rad) *hgt;
     cout<<"The volume of the cone is : "<<vol<<endl;


getch();
return (0);
}