// Write a program in C++ to calculate area of an equilateral triangle. Go to the editor
// Sample Output:
// Calculate the area of the Equilateral Triangle :
// ----------------------------------------------------
// Input the value of the side of the equilateral triangle: 5
// The area of equilateral triangle is: 10.8253.....????
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


    double side , area ;
    cout<<"Enter the side : "<<endl;
    cin>>side;
area = sqrt(3)/4*(side*side);
cout<<"The area is : "<<area<<endl;


getch();
return (0);
}