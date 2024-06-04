// Write a program in C++ to add two binary numbers. Go to the editor
// Sample Output:
// Addition of two binary numbers:
// -----------------------------------
// Input the 1st binary number: 1010
// Input the 2nd binary number: 0011
// The sum of two binary numbers is: 1101.........????
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


     long bn1 , bn2;
     int r = 0 , i = 0;
     int sum[30];
     cout<<"-------------------------------------------\n"<<endl;
     cout<<"Enter the first bunary numbers : "<<endl;
     cin>>bn1;
     cout<<"Enter the second binary number : "<<endl;
     cin>>bn2;
     while(bn1 != 0 || bn2 != 0)
     {
        sum[i++] = (int)((bn1 % 10 + bn2 % 10 + r)%2);
        r = (int)((bn1 % 10 + bn2 % 10 + r)/2);
        bn1 = bn1/10;
        bn2 = bn2/10;
     }
     if(r!=0)
     {
        sum[i++] = r;
     }
     --i;
     cout<<"The sum of two numbers is : "<<endl;
     while (i >= 0)
     {
        cout<<(sum[i--]);
     }
     cout<<endl;

getch();
return (0);
}