// Write a program in C++ to calculate the volume of a cube. Go to the editor
// Sample Output:
// Calculate the volume of a cube :
// ---------------------------------------
// Input the side of a cube : 5
// The volume of a cube is : 125.....?????
#include<iostream>
using namespace std;
int main()
{


     int side , vol;
     cout<<"Enter the side : "<<endl;
     cin>>side;
     cout<<"-----------------"<<endl;
vol  = (side * side * side);
cout<<"The volume of the cube is given : "<<vol<<endl;


return (0);
}