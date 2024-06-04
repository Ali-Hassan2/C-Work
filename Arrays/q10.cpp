// Write a C++ program to find the smallest element missing in a sorted array.....???
#include<iostream>
#include<conio.h>
#include<math.h>
#include<climits>
using namespace std;
int missing(int nums[] , int startpos , int endpos)
{
    if(startpos > endpos )

    return endpos+1;

    if(startpos != nums[startpos])
    {
        return startpos;
    }
    int mid = (startpos + endpos) / 2 ;

    if (nums[mid] == mid)
    {
        return missing(nums , mid + 1 , endpos) ;

        
    }
    return (nums , startpos , mid) ;
}
int main()
{

    int n;
    int result;
    cout<<"Enter the size of the array : "<<endl;
    cin>>n;
    int nums[n];
    for (int i = 0 ; i < n ; i++)
    {
        cout<<"Enter the number : "<<endl;
        cin>>nums[i];
result = missing( nums , 0 , n-1 );
    }
    cout<<"The missing smallest number is : "<<result<<endl;


     


getch();
return (0);
}