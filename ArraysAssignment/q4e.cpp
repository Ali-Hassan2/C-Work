#include<iostream>
#include<conio.h>
#include<math.h>
#include<climits>
using namespace std;
int main()
{


     int n;
     cout<<"Enter the size of the array : "<<endl;
     cin>>n;
     int arr[n];
     for (int i = 0  ; i < n ; i++)
     {
        cout<<"Enter the ( "<<i+1<<" ) number : "<<endl;
        cin>>arr[i];
    
     }
     cout<<"\n===================================="<<endl;
     cout<<"The unique elements are : "<<endl;
     for (int i = 0 ; i < n ; i++)
     {
        int cnt = 0;
        for (int j = 0 ; j < n ; j++)
        {
            if(i != j &&  arr[i] == arr[j])
            cnt++;
        }
        if (cnt == 0)
        {
            cout<<"==================="<<endl;
            cout<<arr[i]<<" ";
        }
     }
     cout<<endl;


getch();
return (0);
}