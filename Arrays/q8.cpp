//  Write a C++ program to find the most occurring element in an array of integers. ....????
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

void most(int arr[] , int n){
    int max_count = 0;
cout<<"Enter the size : "<<endl;
cin>>n;
for(int i = 0 ; i < n ; i++)
{
    cout<<"Enter the number : "<<endl;
    cin>>arr[i];
    int count = 1 ;
    for (int j = i+1 ; j < n ; j++)
    {
        if (arr[j]==arr[i])
        {
            count++;
        }
        if (count > max_count)
        {
            max_count = count;
        }
    }

} 
for (int i = 0  ; i < n ; i++)
{
    int count = 1 ;
    for (int j = i+1 ; j < n ; j++)
    {
        if (arr[i]==arr[j])
        {
            count++;
        }
        if (count==max_count)
        {
            cout<<arr[i]<<endl;
        }
    }
}
}
int main()
{
    int n;
    int arr[n];
   most(arr , n);


     


getch();
return (0);
}