// write a program to show the all possible combinations of 1 , 2 , 3 , 4...??
#include<iostream>
#include<conio.h>
#include<math.h>
#include<climits>
using namespace std;
int main()
{


    for (int i = 1 ; i <= 4 ; i++)
    {
        for (int j = 1 ; j <= 4 ; j++)
        {
            for (int k = 1 ; k <= 4 ; k++)
            {
                for (int l = 1 ; l <= 4 ; l++)
                cout<<i<<" , "<<j<<" , "<<k<<" , "<<l<<endl;
            }
        }
    }


getch();
return (0);
}