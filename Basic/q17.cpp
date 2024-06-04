// Write a program in C++ to find the third angle of a triangle. Go to the editor
// Sample Output:
// Find the third angle of a triangle :
// -----------------------------------------
// Input the 1st angle of the triangle : 30
// Input the 2nd angle of the triangle : 60
// The 3rd of the triangle is : 90....????
#include<iostream>
using namespace std;
int main()
{


     int anl1 , anl2 , anl3;
     cout<<"Enter the first angle : "<<endl;
     cin>>anl1;
     cout<<"Enter the second angle : "<<endl;
     cin>>anl2;

     // as a + b + c = 180 so
     anl3 = 180 - anl1 - anl2;

     cout<<"The third angle is : "<<anl3<<endl;


return (0);
}