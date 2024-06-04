// most occuring element in the array
#include<iostream>
#include<conio.h>
#include<math.h>
#include<climits>
using namespace std;

void most(int arr[],int n )
{
    // cout<<"Enter the size of the array : "<<endl;
    // cin>>n;
    int maxcnt = 0;
     arr[n];
    for(int i = 0 ; i <  n ; i++)
    {
        cout<<"Enter the ( "<<i+1<<" ) number : "<<endl;
        cout<<"\n---------------------------------"<<endl;
        cin>>arr[i];
        cout<<"\n---------------------------------"<<endl;
        int cnt = 1;
        for (int j = 0 ; j < i+1 ; j++)
        {
            if(arr[i] == arr[j])
            {
                cnt++;
            }
            if(cnt > maxcnt)
            {
                maxcnt = cnt;
            }
        }


    }

    for (int i = 0 ; i < n ; i++)
    {
        int cnt  = 1;
        for (int j = 0 ; j < i+1 ; j++)
        {
            if (arr[i] == arr[j])
            {
                cnt++;
            }
            if(cnt == maxcnt)
            {
                cout<<"==================================\n"<<endl;
                                cout<<"The maximum repeated numbers are : "<<endl;
                                cout<<"==================================\n"<<endl;
                cout<<arr[i]<<endl;
                cout<<"\n================================="<<endl;
            }
        }

    }
}
int main()
{
int n ;
cout<<"Enter the size of the array : "<<endl;
cin>>n;
int arr[n];
most(arr , n);

getch();
return (0);
} 