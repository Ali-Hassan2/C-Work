// Write a C++ program in which a user enters a number, and the program will find the Even and odd number.
//  Your program should only accept integers of length 2 or higher and should ask the user to re-enter a value if
//   the value containing total numbers of integers less than 2.
//  The program with goto statement. Even odd program with goto statement.....???????
#include<iostream>
#include<conio.h>
#include<math.h>
#include<unistd.h>
#include<stdlib.h>
#include<ctime>
#include<iomanip>
#include<sstream>
#include<vector>
using namespace std;
int main()
{

ali:
     int n ;
     cout<<"Enter the number : "<<endl;
     cin>>n;
     if(n > 9 && n < 100)
     {
        if(n % 2 == 0)
        {
            cout<<"The number is even."<<endl;
        }
        else if(n % 2 != 0) 
        {
            cout<<"The number is odd."<<endl;
        }
    else 
    {
        cout<<"Please enter only two digits number."<<endl;
    }
    goto ali;
     }


getch();
return (0);
}