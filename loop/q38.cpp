// print the following sequence 1 3 9 27 81
#include<iostream>
#include<conio.h>
#include<math.h>
#include<climits>
using namespace std;
int main()
{


     for  (int i = 1 ; i <= 81 ; i*=3)
     {
        cout<<i<<",\t";
     }


getch();
return (0);
}