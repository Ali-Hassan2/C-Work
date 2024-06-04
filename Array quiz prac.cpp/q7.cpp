// Find Subarray with given sum | Set 1 (Non-negative Numbers)....????
#include<iostream>
#include<conio.h>
#include<math.h>
#include<climits>
using namespace std;
void subarray(int arr[]  , int n , int sum )
{
    for (int i = 0 ; i < n ; i++)
    {
        int currsum = arr[i];
        if(currsum == sum)
        {
            cout<<"The sum is found at an index : "<<i<<endl;

            return ;
        }
            else 
    {
        for (int j = 0 ; j  < n ; j++)
        {
            currsum += sum;
            if (currsum == sum)
            {
                cout<<"The sum is found between the indexes of : "<<i<<" and "<<j<<endl;
            }

        }
    }
    }

}
int main()
{
    int n;
    int sum = n - 1;
    cout<<"Enter the size of the array : "<<endl;
    cin>>n;
    int arr[n];
    for (int i = 0 ; i < n ; i++)
    {
        cout<<"Enter the number : "<<endl;
        cin>>arr[i];
    }
    subarray(arr,n, sum);


     


getch();
return (0);
}
