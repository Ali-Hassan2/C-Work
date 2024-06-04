// C++  Program to find all the roots of a quadratic equation. Using if-else.....????
#include<iostream>

#include<math.h>
using namespace std;

int main()
{
float a , b , c , root1 , root2 , imaginarypart , realpart , disc;
cout<<"Enter the cofficients a,b and c : "<<endl;
cin>>a>>b>>c;
disc = b*b - 4 * a * c ;
if ( disc > 0 )
{
    root1 = -b + sqrt(disc) / (2*a);
    root2 = -b - sqrt(disc) / (2*a);
    cout<<"The real roots are : "<<root1<<" and "<<root2<<endl;
}  
else if(disc == 0)
{
root1 = root2 = -b / (2*a);
cout<<"One real root is : "<<root1<<endl;
} 
else
realpart = -b / (2*a);
imaginarypart = sqrt(-disc) / (2*a);
cout<<"The complex roots are : "<<realpart<<" and "<<imaginarypart<<endl;
return (0);
}