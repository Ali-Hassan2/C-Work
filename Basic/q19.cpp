//  Write a program in C++ to convert temperature in Kelvin to Fahrenheit. Go to the editor
// Sample Output:
// Convert temperature in Kelvin to Fahrenheit :
// ---------------------------------------------------
// Input the temperature in Kelvin : 300
// The temperature in Kelvin : 300
// The temperature in Fahrenheit : 80.33.....?????
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{


     double frnt , kel;
     cout<<"\nEnter the temprature in kelvin : "<<endl;
     cin>>kel;
     frnt = (kel - 273.15) * 9 / 5 + 32;

     cout<<"\nThe temprature in the kelvin is :  "<<kel<<endl;
     cout<<"--------------------------------------"<<endl;
     cout<<"The temprature in the farenheight is : "<<frnt<<" F ."<<endl;


getch();
return (0);
}