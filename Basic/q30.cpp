// Write a program in C++ to compute the specified expressions and print the output. Go to the editor
// Sample Output:
// Compute the specified expressions and print the output:
// ------------------------------------------------------------
// Result of the expression (25.5 * 3.5 - 3.5 * 3.5) / (40.5 - 4.5) is : 2.13889.....????
#include<iostream>
#include<conio.h>
#include<math.h>
#include<unistd.h>
#include<stdlib.h>
using namespace std;
int main()
{
    double result;


     cout<<"------------------------------------------------"<<endl;
     result =(25.5 * 3.5 - 3.5 * 3.5) / (40.5 - 4.5); 
     cout<<"The result of the expression is : "<<result<<endl;


getch();
return (0);
}