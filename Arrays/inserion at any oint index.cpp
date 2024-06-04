#include<iostream>
#include<conio.h>
#include<math.h>
#include<climits>
using namespace std;
int main()
{


     int arr[100] = {2 , 5 , 6 , 7 , 8 , 9};
     int pos , num ,i ;
     cout<<"Enter the Position at which you want to enter the new value : "<<endl;
     cin>>pos;
     cout<<"Enter the Number : "<<endl;
     cin>>num;
// 0 , 1 , 2  , 3 , 4 , 5

     for (i = 5 ; i >= pos ; i--)
     {
        arr[i+1] = arr[i];
        arr[pos] = num;
     }
cout<<"The new cahnged array is : "<<endl;
for (i = 0 ; i < 7 ; i++)
{
    cout<<arr[i]<<" ";
}


getch();
return (0);
}