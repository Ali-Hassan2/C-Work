#include<iostream>
// #include<conio.h>
// #include<math.h>
// #include<unistd.h>
// #include<stdlib.h>
// #include<ctime>
// #include<iomanip>
// #include<sstream>
// #include<vector>
// #include<climits>
using namespace std;
int main()
{


    //  int i ;
     const int size = 10;
     int arr[size];
     for (int  i = 0 ; i < size ; i++)
     {
        cout<<"Enter the number : "<<endl;
        cin>>arr[i];
        }
        int arr2[size] ;
        // arr2[size] = arr[i];

        for ( int i = size - 1 ,  j = 0 ; i >= 0 ; i-- , j++)
        {
            // cout<<"The revere numbers are : "<<arr2[i]<<" ";
            arr2[j] = arr[i];
        }
        cout<<"The reversed numbers are : "<<endl;
        for (int i = 0 ; i < size  ; i++)
        {
            cout<<arr2[i]<<" ";
        }

// getch();
return (0);
}