// Write a C++ program to find second largest element in a given array of integers.....?????
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
using namespace std;
int main()
{


     int n , max1 , max2 ;
     max1 = max2 = INT_MIN;
     cout<<"Enter the size of the array : "<<endl;
     cin>>n;
     int arr[n];
     for( int i = 0 ; i < n ; i++ )
     {
        cout<<"Enter the array number : "<<" "<<i+1<<" "<<endl;
        cin>>arr[i];
        if(arr[i] > max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if (arr[i] > max2)
        {
            max2 = arr[i];
        }
     }
     cout<<"\n--------------------------------------\n"<<endl;
cout<<"The second largest number is : "<<endl;
cout<<max2<<endl;

getch();
return (0);
}