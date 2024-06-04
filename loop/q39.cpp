// 8 , 12 , 17 , 24 ,28 , 33 , 40 print this 
#include<iostream>
#include<conio.h>
#include<math.h>
#include<climits>
using namespace std;
int main()
{


     int num = 8 ;
     int inc = 4 ;
     while(num <= 100)
     {
        cout<<num<<"\t";
        num = num + inc;
        if(inc == 4)
        {
            inc = 5;
        }
        else if(inc == 5)
        {
            inc = 7 ;
        }
        else
        {
            inc = 4;
        }
     }


getch();
return (0);
}