// Write a C++ program to find all elements in array of integers which have at-least two greater elements.
#include<iostream>
#include<conio.h>
#include<math.h>
#include<unistd.h>
#include<stdlib.h>
#include<ctime>
#include<iomanip>
#include<sstream>
#include<vector>
#include<climits>
using namespace std;
int main()
{


int n ; 
cout<<"Enter the size of the array : "<<endl;
cin>>n;
int arr[n];
for (int i = 0 ; i < n ; i++)
{
    cout<<"Enter the number : "<<endl;
    cin>>arr[i];
}
for (int i = 0 ; i < n ; i++)
{
    int count = 0;
    for (int j = 0 ; j < n ; j++)
    {
        if (arr[j] > arr[i])
        {
            count++;
            if(count==2)
            {
                break;
            }
        }

    }
    if (count == 2)
    {
        cout<<arr[i]<<" ";
    }
}


getch();
return (0);
}