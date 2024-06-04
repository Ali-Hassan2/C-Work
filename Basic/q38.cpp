//  Write a language program which accepts the radius of a circle from the user and compute the area and circumference. Go to the editor
// Sample Output:
// Find the area and circumference of any circle :
// ----------------------------------------------------
// Input the radius(1/2 of diameter) of a circle : 5
// The area of the circle is : 78.5397
// The circumference of the circle is : 31.4159..........?????????
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


     double rad , araa , circum;
     cout<<"Enter the radius : "<<endl;
     cin>>rad;
    araa = 3.14 * rad * rad;
    circum = 2 * 3.14 * rad;
    cout<<"The area of the circle is : "<<araa<<endl;
    cout<<"The circumference of the circle is : "<<circum<<endl; 


getch();
return (0);
}