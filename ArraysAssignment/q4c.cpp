#include<iostream>
#include<conio.h>
#include<math.h>
#include<climits>
using namespace std;
int main()
{


     int max = 0 , n;
     cout<<"Enter the size of the array : "<<endl;
     cin>>n;
     int arr[n];
     for (int i = 0 ; i < n ; i++)
     {
        cout<<"Enter the ( "<<i+1<<" ) number : "<<endl;
         cout<<"\n---------------------------------"<<endl;
         cin>>arr[i];
          cout<<"\n---------------------------------"<<endl;
if (arr[i] > max)
{
    max = arr[i];
}

     }

cout<<"\n=======================================\n";
cout<<"The maximum number is : "<<max<<endl;

getch();
return (0);
}