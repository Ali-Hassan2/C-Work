#include<iostream>
#include<conio.h>
#include<math.h>
#include<climits>
using namespace std;
void ascend(int arr[] , int n)
{
    for (int i = 0 ; i < n ; i++)
    {
       for (int j = 0 ; j < n - i - 1 ; j++)
       {
           if (arr[j] > arr[j+1])
        {
            int temp;
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }

       }
    }
    cout<<"\n-------------------------\n"<<endl;
    // in asending order
    cout<<"\nArray in ascending order : "<<endl;
    for (int i = 0 ; i < n ; i++)
    {
        cout<<arr[i]<<" ";
    }
}

void descend(int arr[] , int n)
{
    for (int i = 0 ; i < n ; i++)
    {
        for (int j = 0 ; j < n - i - 1 ; j++)
        {
            if(arr[j] < arr[j+1])
            {
                int temp;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;

            }
        }
    }
    cout<<"\n------------------------\n"<<endl;
cout<<"\nArray in descending order : "<<endl;
    // in decend order
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
for (int i = 0 ; i < n ; i++)
{
    cout<<"Enter the ( "<<i+1<<" ) number : "<<endl;
    cin>>arr[i];
}

ascend(arr , n);
descend(arr , n);


     


getch();
return (0);
}