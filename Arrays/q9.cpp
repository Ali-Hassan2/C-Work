// Write a C++ program to sort a given unsorted array of integers, in wave form.
// Note: An array is in wave form when array[0] >= array[1] <= array[2] >= array[3] <= array[4] >= . . . .??
#include<iostream>
#include<conio.h>
#include<math.h>
#include<climits>
#include<algorithm>
using namespace std;
void swapelement(int * a , int * b)
{
    int t = *a;
    *a = *b;
    *b = t;

}
// another headerfile used to sort data
// <algorithm>
void waves(int nums[] , int n)
{
    sort (nums , nums + n);
    for (int i = 0 ; i < n-1 ; i+=2)
    {
        swapelement(&nums[i] , &nums[i+1]);
    }


}



int main()
{
int n;
cout<<"Enter the size of the array : "<<endl;
cin>>n;
int nums[n];
cout<<"\n The original array : "<<endl;
for (int i = 0 ; i < n ; i++)
{
    cout<<"Enetr the number : "<<endl;
    cin>>nums[i];


}
cout<<"The wave of that array : "<<endl;
waves(nums , n);
for (int i = 0 ; i < n ; i++)
{
    cout<<nums[i]<<" ";
}

     


getch();
return (0);
}