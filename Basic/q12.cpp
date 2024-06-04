//  Write a program in C++ to calculate the volume of a cylinder. Go to the editor
// Sample Output:
// Calculate the volume of a cylinder :
// -----------------------------------------
// Input the radius of the cylinder : 6
// Input the height of the cylinder : 8
// The volume of a cylinder is : 904.32.....????
#include<iostream>
using namespace std;
int main()
{


     int rad , hgt;
     double vol;
     cout<<"Enter the radius of the cylinder : "<<endl;
     cin>>rad;
     cout<<"-----------------------------------"<<endl;
     cout<<"Enter the height of the cylinder : "<<endl;
     cin>>hgt;
     vol = (3.14 *rad *  rad * hgt);
     cout<<"-----------------------------------"<<endl;
     cout<<"The volume of the cylinder is : "<<vol;



return (0);
}