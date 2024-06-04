// 2D- Arrays
#include<iostream>
#include<conio.h>
#include<math.h>
#include<climits>
using namespace std;
int main()
{


     int arr[20] [30] ;
     for (int i = 0 ; i < 20 ; i++)
     {
        for (int j = 0 ; j < 30 ; j++)
        {
            cout<<"Enter the number : "<<endl;
            arr[i][j] = rand()/100;
        }
        cout<<endl;
     }
for (int i = 3 ; i < 20 ; i++ )
{
    for (int j = 0 ; j < 30 ; j++ )
    {
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}

getch();
return (0);
}