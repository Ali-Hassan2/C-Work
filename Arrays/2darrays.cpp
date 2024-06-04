#include<iostream>
#include<conio.h>
#include<math.h>
#include<climits>
using namespace std;
int main()
{


     int arr[4][4]={12 , 95 , 46 , 84 , 71 , 59 , 64 , 48 , 8 , 14 , 10 , 12 , 4 , 10 , 6 ,8};
     for (int i = 0 ; i < 4 ; i++)
     {
        for (int j = 0 ; j < 4 ; j++ )
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
     }
     cout<<endl;

cout<<"======================================="<<endl;
cout<<"After Exchanging the elements : "<<endl;
for (int i = 3 ; i >= 0 ; i--)
{
    for (int j = 3 ; j >= 0 ; j--)
    {
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
cout<<endl;
getch();
return (0);
}