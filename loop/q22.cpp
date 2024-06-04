#include<iostream>
#include<conio.h>
#include<math.h>
#include<climits>
using namespace std;
int main()
{


     int i , min ,val;
     cout<<"Enter the number : "<<endl;
     cin>>min;
     for (i = 0 ; i < 19 ; i++)
     {
        cout<<"enter the Value : "<<endl;
        cin>>val;
        if(val < min)
        {
            min = val;
        }
     }
     cout<<"The minimum value is : "<<min<<endl;


getch();
return (0);
}