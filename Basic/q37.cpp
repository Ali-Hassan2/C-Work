// Write a language program in C++ which accepts the user's first and last name and print them in reverse order with a space between them. Go to the editor
// Sample Output:
// Print the name in reverse where last name comes first:
// -----------------------------------------------------------
// Input First Name: Alexandra
// Input Last Name: Abramov
// Name in reverse is: Abramov Alexandra........???????
#include<iostream>
#include<conio.h>
#include<math.h>
#include<unistd.h>
#include<stdlib.h>
#include<ctime>
#include<iomanip>
using namespace std;
int main()
{


     char fname[30] , lname[30];
     cout<<"Enter the first name : "<<endl;
     cin>>fname;
     cout<<"Enter the last name : "<<endl;
     cin>>lname;
     cout<<"The name in reverse is : "<<lname<<" "<<fname<<endl;


getch();
return (0);
}