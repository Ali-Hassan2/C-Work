// Write a C++ program to find the largest three elements in an array.........????
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


     int n , max1 , max2 , max3 ;
     max1 = max2 = max3 = INT_MIN;
     cout<<"Enter the size of the array : "<<endl;
     cin>>n;
     int arr[n];
     for (int i = 0 ; i < n ; i++)
     {
        cout<<"Enter the number : "<<endl;
        cin>>arr[i];
        if (arr[i] > max1)
        {
        max3 = max2;
        max2 = max1;
        max1 = arr[i];
        }
        else if(arr[i] > max2)
        {
            max3 = max2;
            max2 = arr[i];
        }
        else if(arr[i] > max3)
        {
            max3 = arr[i];
        }
     }

cout<<"The first largerst number is : "<<max1<<endl;

cout<<"The second largerst number is : "<<max2<<endl;

cout<<"The third largerst number is : "<<max3<<endl;

getch();
return (0);
}