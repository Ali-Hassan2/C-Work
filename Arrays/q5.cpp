// Write a C++ program to find k largest elements in a given array of integers. ........????/
#include<iostream>
#include<conio.h>
#include<math.h>
#include<unistd.h>
#include<stdlib.h>
#include<ctime>
#include<iomanip>
#include<sstream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
int main()
{


     int k , n ;
     cout<<"Enter the size of the array : "<<endl;
     cin>>n >> k;
     int arr[n];
     for (int i = 0 ; i < n ; i++ )
     {
        cout<<"Enter the array number : "<<i+1<<endl;
        cin>>arr[i];
     } 
     sort(arr,arr+n,greater <int> ());
     cout<<"The "<<k<<" Largest numbers are : "<<endl;
     for (int i = 0 ; i < k ; i++)
     {
        cout<<arr[i]<<endl;

     }


getch();
return (0);
}