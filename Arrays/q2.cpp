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

int max = INT_MIN; 
     int arr[10];
     for (int i = 0 ; i < 10 ; i++)
     {
        cout<<"Enter the value : "<<endl;
        cin>>arr[i];
if(arr[i] > max)
{
    max = arr[i];
}


     }
     cout<<"The maximum is : "<<max<<endl;



getch();
return (0);
}