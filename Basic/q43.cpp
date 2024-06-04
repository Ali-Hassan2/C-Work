// Write a program in C++ to print the code (ASCII code / Unicode code etc.) of a given character. Go to the editor
// Sample Output:
// Print code (ASCII code / Unicode code etc.) of a given character:
// -----------------------------------------------------------------------
// Input a character: a
// The ASCII value of a is: 97
// The character for the ASCII value 97 is: a....??????
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


     char ch;
     cout<<"Enter a character : "<<endl;
     cin>>ch;
     cout<<"The ascii value is : "<<(int)ch<<endl;
     cout<<"The ASCII value is : "<<(int)ch<<" is "<<(char)((int)ch)<<endl;


getch();
return (0);
}