// using namespace std;
// int main()
// {


//     //  int i ;
//      const int size = 10;
//      int arr[size];
//      for (int  i = 0 ; i < size ; i++)
//      {
//         cout<<"Enter the number : "<<endl;
//         cin>>arr[i];
//         }
//         int arr2[size] ;
//         // arr2[size] = arr[i];

//         for ( int i = size - 1 ,  j = 0 ; i >= 0 ; i-- , j++)
//         {
//             // cout<<"The revere numbers are : "<<arr2[i]<<" ";
//             arr2[j] = arr[i];
//         }
//         cout<<"The reversed numbers are : "<<endl;
//         for (int i = 0 ; i < size  ; i++)
//         {
//             cout<<arr2[i]<<" ";
//         }

// // getch();
// return (0);
// }
#include<iostream>
#include<conio.h>
#include<math.h>
#include<climits>
using namespace std;

void rev( int arr[] , int n  )
{
    
    
    for (int i = 0 ; i < n ; i++)
    {
        cout<<"Enter the ( "<<i+1<<" ) number : "<<endl;
        cin>>arr[i];
    }

    int arr2[n];
    for (int i = n - 1 , j = 0 ; i >= 0 ; i-- , j++ )
    {
        arr2[j] = arr[i];
        
    }

    cout<<"The reversed numbers are : "<<endl;
    for(int i = 0 ; i < n ; i++)
    {
        cout<<arr2[i]<<" ";
    }
}

int main()
{

    // int n ;
    const int n = 10 ;
    int arr[n];
    // cout<<"The real array is : "<<endl;
    // for (int i = 0 ; i < n ;i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    rev(arr,n);


     


getch();
return (0);
}