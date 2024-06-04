// Write a program in C++ to input a single digit number and print a rectangular form of 4 columns and 6 rows. Go to the editor
// Sample Output:
// Make a rectangular shape by a single digit number :
// --------------------------------------------------------
// Input the number : 5
// 5555
// 5 5
// 5 5
// 5 5
// 5 5
// 5555.....????
#include<iostream>
#include<conio.h>
#include<math.h>
#include<unistd.h>
#include<stdlib.h>
using namespace std;
int main()
{


     int n;
     cout<<"Enter the number : "<<endl;
     cin>>n;
     for(int i = 1 ; i <= n ; i++)
     {
        for(int j = 1 ; j <= n ; j++)
        {
            if(i==1 || i==n || j==1 || j==n)
            {
            cout<<n;
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
     }


getch();
return (0);
}