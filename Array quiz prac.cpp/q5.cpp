// Count number of occurrences (or frequency) in a sorted array...???
#include<iostream>
#include<conio.h>
#include<math.h>
#include<climits>
using namespace std;
int occurence(int arr[] , int n , int x)
{
    int res = 0 ;
    for (int i = 0 ; i < n ; i++)
    {
        if (x == arr[i])
        {
            res++;
        }
    }

    return res;

}
int main()
{
int n;
int x = 2; 
cout<<"Enter the size of the array : "<<endl;
cin>>n;
int arr[n];
for (int i = 0 ; i < n ; i++)
{
    cout<<"Enter the number : "<<endl;
    cin>>arr[i];
}


cout<<"The occurence of the number in the array is  : "<<occurence(arr , n ,x);


     


getch();
return (0);
}