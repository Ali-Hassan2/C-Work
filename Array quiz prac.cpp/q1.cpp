// Find a peak element which is not smaller than its neighbours......????
#include<iostream>
#include<conio.h>
#include<math.h>
#include<climits>
using namespace std;
int peakvalue(int arr[] , int n)
{
    if (n==1)
    {
        return 0;
    }
    if (arr[0] >= arr[1])
    {
        return 0;
    }
    if(arr[n-1] >= arr[n-2])
    {
        return n-1;
    }
    // for checking every element 
    for (int i = 0 ; i < n ; i++)
    {
        if (arr[i] >= arr[i-1] && arr[i] >= arr[i+1])
        {
            return i;
        }
    }
}
int main()
{
    int n;
    cout<<"Enter the number : "<<endl;
    cin>>n;
    int arr[n];
cout<<"The largest number in the array is : "<<peakvalue(arr , n );


     


getch();
return (0);
}