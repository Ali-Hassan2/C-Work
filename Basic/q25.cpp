// Write a program in C++ to compute the total and average of four numbers. Go to the editor
// Sample Output:
// Compute the total and average of four numbers :
// ----------------------------------------------------
// Input 1st two numbers (separated by space) : 25 20
// Input last two numbers (separated by space) : 15 25
// The total of four numbers is : 85
// The average of four numbers is : 21.25......?????
#include<iostream>
#include<conio.h>
#include<math.h>
#include<unistd.h>
#include<stdlib.h>
using namespace std;
int main()
{


     double n1 , n2 , n3 , n4 , avg = 0 , sum = 0 ;

     cout<<"Enter the 1 two numbers separated by space :  "; 
     cin>> n1 >> n2;
     cout<<"Enter the 3 and 4 number separated by space : "; 
     cin>> n3 >> n4;
     sum = n1 + n2 + n3 + n4;
     cout<<"The sum of four numbers is : "<<sum<<endl;

     avg = sum/4;

     cout<<"The average of four numbers is : "<<avg<<endl;


getch();
return (0);
}