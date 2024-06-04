// Write a program in C++ to convert temperature in Fahrenheit to Kelvin. Go to the editor
// Sample Output:
// Convert temperature in Fahrenheit to Kelvin :
// ---------------------------------------------------
// Input the temperature in Fahrenheit : 80.33
// The temperature in Fahrenheit : 80.33
// The temperature in Kelvin : 300......?????
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{


     double frnt , kel;
     cout<<"Enter the temprature in farenheight : "<<endl;
     cin>>frnt;
     kel = (frnt - 273.15) * 9 /5 + 32;

     cout<<"The temprature in the kelvin is : "<<kel<<endl;


getch();
return (0);
}