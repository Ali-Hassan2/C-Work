//  Using the if-else C++  Program to take a value from the user as input electricity unit charges and calculate
//   total electricity bill according to the given condition: For the first 50 units Rs. 0.50/unit………….
//   For the next 100 units Rs. 0.75/unit…..For the next 100 units Rs. 1.20/unit 
//   ……………For unit above 250 Rs. 1.50/unit………An additional surcharge of 20% is added to the bill…….Using if-else....???
#include<iostream>
using namespace std;

int main()
{
 int unit , charge , bill;
 cout<<"Enter the units consumed : "<<endl;
 cin>>unit;
 if(unit <= 50)
 {
    charge = 0.50 * unit;
 }
// For the first 50 units, the charges are fixed at 0.50 per unit. 
// Hence, for the first 50 units, the charges would be 0.50 * 50 = 25.
// For the next 100 units, the charges are calculated at 0.75 per unit.
//  Hence, for the next 100 units, the charges would be 0.75 * (units - 50).
// Finally, the total charges are calculated as the sum of the fixed charges and the charges calculated for the next 100 units:
//  charges = 25 + 0.75 * (units - 50).
if(unit <= 150)
{
    charge = 25 * 0.75 * (unit - 50);
}
if(unit <= 250)
{
    charge = 100 + 1.20 * (unit - 150);
}
else
{
    charge = 220 + 1.50 * (unit - 250);
}
bill = charge + 0.2 * charge;
cout<<"The total bill is : "<<bill<<endl;
return (0);
}