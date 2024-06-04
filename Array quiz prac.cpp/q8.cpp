#include<iostream>
#include<conio.h>
#include<algorithm>
#include<math.h>
#include<climits>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the array : "<<endl;
    cin>>n;
    int arr[n];
    for (int i= 0 ; i < n ; i++)
    {
        cout<<"Enter the number "<<i+1<<endl;
        cin>>arr[i];
    }
    sort (arr , arr + n);
    int j = 0 ;
    for (int i = 0 ; i < n -  1 ; i++)
    {
        if (arr[i] != arr[i+1])
        {
            arr[j++] = arr[i];
        }
    }
    arr[j++] = arr[n-1];
cout<<"The duplicated array : "<<endl;
for (int i = 0 ; i < n ; i++)
{
    cout<<arr[i]<<" ";

}


     


getch();
return (0);
}