// looping structure...................
#include<iostream>
#include<conio.h>
#include<math.h>
#include<climits>
using namespace std;
int main()
{


     int i = 1 , j = 5;
     cout<<"-----------\n";
     cout<<"a\tb \n";
     cout<<"-----------\n";
     while(i <= 5)
     {
        cout<<i<<"\t"<<j<<endl;
        i++;
        j--;
     }
     cout<<"-----------\n";


getch();
return (0);
}