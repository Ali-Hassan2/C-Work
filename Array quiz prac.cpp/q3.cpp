#include<iostream>
#include<conio.h>
#include<math.h>
#include<climits>
using namespace std;
int rev(int arr[] , int n)
{
    for (int i = n - 1 ; i >= 0 ; i--)
    {
        cout<<arr[i];

    }
}
int main()
{
    int n;
    cout<<"Enter the size of the array : "<<endl;
    cin>>n;
    int arr[n];
    for (int i = 0 ; i < n ; i++)
    {
        cout<<"Enter the number : "<<endl;
        cin>>arr[i];
    }
    cout<<"The reversed array is : "<<endl;
    rev(arr , n);
    


     


getch();
return (0);
}