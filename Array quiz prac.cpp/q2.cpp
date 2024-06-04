#include<iostream>
#include<conio.h>
#include<math.h>
#include<climits>
using namespace std;
int max(int arr[] , int n)
{
    int max=0;
    for (int i = 0 ; i < n ; i++)
    {
        if(arr[i] > max)
        {
            max=arr[i];
            
        }
    }
    return max;
    
}
int min(int arr[] , int n)
{
    int min = INT_MAX ;
    for (int i = 0 ; i < n ; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }

    }
    return min;
}
int main()
{
    int n;
    cout<<"Enter the size of the array : "<<endl;
    cin>>n;
    int arr[n];
    // cout<<"The original array is : "<<endl;
    for (int i = 0 ; i < n ; i++)
    {
        cout<<"Enter the number : "<<endl;
        cin>>arr[i];

    }
cout<<"The maximum is : "<<max(arr,n)<<endl;
cout<<"The minimum is : "<<min(arr , n)<<endl;

     


getch();
return (0);
}