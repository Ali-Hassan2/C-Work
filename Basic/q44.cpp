// Write a program in C++ to enter length in centimeter and convert it into meter and kilometer. Go to the editor
// Sample Output:
// Convert centimeter into meter and kilometer :
// --------------------------------------------------
// Input the distance in centimeter : 250000
// The distance in meter is: 2500
// The distance in kilometer is: 2.5.....????
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


     double leng , met , kil;
     cout<<"Enter the length: "<<endl;
     cin>>leng;
met = leng / 100;
kil = leng /1000;
cout<<"The legth in meters is : "<<met<<"m"<<endl;
cout<<"The length in kilometers is : "<<kil<<"Km"<<endl;


getch();
return (0);
}