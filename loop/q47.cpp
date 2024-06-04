// write a program to write the sum of the following sequence.....????
// 1/3+ 3/5+ 5/7......97/99.....????
#include<iostream>
#include<conio.h>
#include<math.h>
#include<climits>
using namespace std;
int main()
{


    //  double sum = 0 ;
    // for (int i = 1 ; i <= 97 ; i++)
    // {
    //     sum = sum + i/(i+2);
    // }
    // cout<<"The sum of the following series is : "<<sum<<endl;

    // using do while loop 
    double sum= 0 ;
    int i = 1;
    do
    {
        /* code */
        sum = sum + i/(i+2);
    } while (i<=97);
    cout<<"The sum of the series is : "<<sum<<endl;
    


getch();
return (0);
}