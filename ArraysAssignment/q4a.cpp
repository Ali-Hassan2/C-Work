#include<iostream>
#include<conio.h>
#include<math.h>
#include<climits>
using namespace std;
int main()
{


     int n;
     int sum =0 ;
     cout<<"Enter the size of the array : "<<endl;
     cin>>n;
     int arr[n];
     for (int i = 0 ; i < n ; i++)
     {
        cout<<"Enter the ( "<<i+1<<" ) number : "<<endl;
        cout<<"\n---------------------------------"<<endl;
        cin>>arr[i];
        cout<<"\n---------------------------------"<<endl;
        sum = sum +arr[i];
     }
cout<<"\n=======================================\n";
cout<<"The sum of the required numbers is : "<<sum<<endl;
getch();
return (0);
}