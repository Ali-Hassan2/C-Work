// Sort an array of 0s, 1s and 2s | Dutch National Flag problem....????
#include<iostream>
#include<conio.h>
#include<math.h>
#include<climits>
using namespace std;
void sort(int arr[] , int n)
{
    int lo = 0;
    int mid = 0 ;
    int hig = n - 1;
    while (mid <= hig)
    {
        switch(arr[mid])
        {
            case 0:
            
            swap(arr[lo++] ,arr[mid++] );
            
                break;
            
            case 1:
            
                mid++;
               break; 
            
            case 2:
            {
                swap(arr[mid] , arr[hig--]);
                
                     break;
                
            }
        }
    }
}

void printarray(int arr[] , int n)
{
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
    for (int i= 0 ; i < n ; i++)
    {
        cout<<"Enter the number : "<<endl;
        cin>>arr[i];
    }
sort(arr,n);
printarray(arr,n);

     


getch();
return (0);
}