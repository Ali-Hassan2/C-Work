//  Write a program in C++ to calculate the volume of a sphere. Go to the editor
// Sample Output:
// Calculate the volume of a sphere :
// ---------------------------------------
// Input the radius of a sphere : 6
// The volume of a sphere is : 904.32.....????
#include<iostream>
using namespace std;
int main()
{


     int radius;
     double vol;
     cout<<"--------------------------"<<endl;
     cout<<"Enter the radius of the sphere : "<<endl;
     cin>>radius;
     vol = (4 * 3.14 * radius*  radius*  radius   ) / 3;
     cout<<"--------------------------"<<endl;
     cout<<"The volume of the sphere is : "<<vol<<endl;


return (0);
}