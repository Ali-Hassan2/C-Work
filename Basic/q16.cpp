// Write a program in C++ to convert temperature in Fahrenheit to Celsius. Go to the editor
// Sample Output:
// Convert temperature in Fahrenheit to Celsius :
// ---------------------------------------------------
// Input the temperature in Fahrenheit : 95
// The temperature in Fahrenheit : 95
// The temperature in Celsius : 35....????
#include<iostream>
using namespace std;
int main()
{
// rember bro these all logics

     int frnt , cel;
     cout<<"\nEnter the temprature in farenheight : "<<endl;
     cin>>frnt;
cout<<"\n-------------------------------------------\n";
cout<<"\n-------------------------------------------\n";
cout<<"The temprature in farenheight is : "<<frnt<<endl;
cel = (frnt - 32 ) * 5 / 9 ;
cout<<"\n--------------------------------------------\n";

cout<<"The temprature in celcius is : "<<cel<<endl;

return (0);
}