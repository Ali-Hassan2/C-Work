// Write a program in C++ to divide two numbers and print on the screen. Go to the editor
// Sample Output:
// Divide two numbers and print:
// ----------------------------------
// The quotient of 30 and 10 is : 3....???
#include<iostream>
#include<conio.h>
#include<math.h>
#include<unistd.h>
#include<stdlib.h>
using namespace std;
int main()
{


     int n1 = 30 , n2 = 10;
     int div;
     div = n1 / n2;
     cout<<"The quotient of "<<n1<<" and "<<n2<<" is : "<<div<<endl;


getch();
return (0);
}