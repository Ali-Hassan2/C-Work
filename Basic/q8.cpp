//  Write a program in C++ to formatting the output. Go to the editor
// Sample Output:
// Formatting the output :
// ----------------------------
// The value of pi : 3.1416
// The value of pi 4 decimal place of total width 8 : | 3.1416|
// The value of pi 4 decimal place of total width 10 : | 3.1416|
// The value of pi 4 decimal place of total width 8 : |--3.1416|
// The value of pi 4 decimal place of total width 10 : |----3.1416|
// The value of pi in scientific format is : 3.1416e+00
// Status in number : 0
// Status in alphabet : false.....????
#include<iostream>
// using iomanip library
#include<iomanip>
using namespace std;

int main()
{
    double pi = 3.14159265;
    // we use here set precision because we need only decimal for 4 digits so we use presision of 4
    cout << fixed <<setprecision(4);
    cout<<"The value of pi is : "<<pi<<endl;
    cout<<"Enter the value of that person : "<<endl;
    cout<<"Enter the value of numeber : "<<endl;
cout<<"Enter the value of that person : "<<endl;

cout<<"Enter the value of that person : "<<endl;
// now here i am using setw which satnds for (set width )so this will use to sort the data
cout<<"The value of the pi 4 decimal place with width 8 is : | "<<setw(8)<<pi<<" | "<<endl; 
cout<<"The value of the pi 4 decimal place with width 10 is : |"<<setw(10)<<pi<<" | "<<endl;


// now i am using the setfill('-') used for storing the blank by character so lets use 
cout<< setfill('-');
cout<<"The value of the pi 4 decimal place with width 8 is : | "<<setw(8)<<pi<<" | "<<endl; 
cout<<"The value of the pi 4 decimal place with width 10 is : |"<<setw(10)<<pi<<" | "<<endl;

// scientific; used for storing exponenets
cout<<scientific;
cout<<"The value of scientific format of pi is given : "<<pi<<endl;


bool done = false; // for numbers 
cout<<"Status in numbers : "<<done<<endl;
cout<< boolalpha; // used for alphabet.
cout<<"Status in alphabets : "<<done<<endl;

cout<<"\n"<<endl;



return (0);
}