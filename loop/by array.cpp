#include<iostream>
#include<conio.h>
#include<math.h>
#include<climits>
using namespace std;
int main()
{


     int n;

     double mark1 = -1;
     double mark2 = -2;
     cout<<"Enter the number of the students : "<<endl;
     cin>>n;
     int arr[n];
     for (int i = 0 ; i < n ; i++)
     {
        cout<<"Enter the marks of the student "<<i+1<<" : "<<endl;
        cin>>arr[i];
        if(arr[i] > mark1)
        {
            mark2 = mark1;
            mark1 = arr[i];
        }
        else if(arr[i] > mark2)
        {
            mark2 = arr[i];
        }
     }
     cout<<"The highest numbers are : "<<mark1<<endl;
     cout<<"The 2nd highest marks are : "<<mark2<<endl;


getch();
return (0);
}