// ascend order 
#include<iostream>
#include<conio.h>
#include<math.h>
#include<climits>
using namespace std;
void asend(int arr[] , int n)
{
    for (int i = 0 ; i < n ; i++)
    {
        for (int j = 0 ; j < n - i - 1 ; j++)
        {
            if (arr[j] > arr[j+1])
            {
                int temp ;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    cout<<"The array in the ascending order : "<<endl;
    for (int i = 0 ; i < n ; i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
int n; 
cout<<"Enter the size of the array : "<<endl;
cin>>n;
int arr[n];
// cout<<"\nThe original array is : "<<endl;
for (int i = 0 ; i < n ; i++)
{
    cout<<"Enter the number : "<<endl;
    cin>>arr[i];

}
asend(arr,n);

     


getch();
return (0);
}