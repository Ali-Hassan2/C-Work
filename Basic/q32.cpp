// Write a program in C++ to print a mystery series from 1 to 50. Go to the editor
// Sample Output:
// Print a mystery series:
// -------------------------
// The series are:
// 5 4 2 7 11 10 8 13 17 16 14 19 23 22 20 25 29 28 26 31 35 34 32 37 41 4 0 38 43 47 46 44 49.....???
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


     int n1 = 1;
     while(true)
     {
        ++n1;
        if(n1%3==0)
        continue;
        if(n1 == 50)
        break;
        if(n1 % 2 == 0)
        {
            n1+=3;
        }
        else
        {
            n1 -=3;
        }
        cout<<n1<<" ";
     }
     cout<<endl;


getch();
return (0);
}