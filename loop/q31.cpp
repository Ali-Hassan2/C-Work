// q16 from the book
#include<iostream>
#include<conio.h>
#include<math.h>
#include<climits>
using namespace std;
int main()
{


     int frt , snd , n;
     frt = snd = 0 ;//n = 0;
     for ( int i = 1 ; n != 0 ;i++ )
     {
        cout<<"Enter a numebr : "<<endl;
        cin>>n;
        if(n > frt)
        {
            snd = frt;
            frt = n;
        }
        else if(n>snd)
        {
            snd = n;

        }
     }
cout<<"The second largest number is : "<<snd<<endl;


getch();
return (0);
}