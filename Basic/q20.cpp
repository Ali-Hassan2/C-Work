// Write a program in C++ to convert temperature in Kelvin to Celsius. Go to the editor
// Sample Output:
// Convert temperature in Kelvin to Celsius :
// ------------------------------------------------
// Input the temperature in Kelvin : 300
// The temperature in Kelvin : 300
// The temperature in Celsius : 26.85....???
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{


     double kel , cel;
     cout<<"Enter the temprature in kelvin : "<<endl;
     cin>>kel;
     cel = (kel - 273.15);
     cout<<"The temprature in celcius is : "<<cel<<" C "<<endl;


getch();
return (0);
}