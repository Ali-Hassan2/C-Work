// Write a program in C++ to convert temperature in Celsius to Kelvin. Go to the editor
// Sample Output:
// Convert temperature in Celsius to Kelvin :
// ---------------------------------------------------
// Input the temperature in Celsius : 26.85
// The temperature in Celsius : 26.85
// The temperature in Kelvin : 300......????
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{


     double cel , kel;
     cout<<"Enter the temprature in celcius : "<<endl;
     cin>>cel;
     kel = cel + 273.15;
     cout<<"The temprature in the kelvin is : "<<kel<<endl;


getch();
return (0);
}