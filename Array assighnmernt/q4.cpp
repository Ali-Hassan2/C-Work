// Write a program to find the sum and product of all elements of an array...???
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


     int n , sum = 0 , pro = 1;
     cout<<"Enter the size of the array : "<<endl;
     cin>>n;
     int arr[n];
     for (int i = 0 ; i < n ; i++)
     {
        cout<<"Enter the ( "<<i+1<<" ) number : "<<endl;
        cin>>arr[i];
        sum = sum + arr[i];
        pro = pro * arr[i];
     }
     cout<<"The sum is : "<<sum<<endl;
     cout<<"The product is : "<<pro<<endl;


getch();
return (0);
}