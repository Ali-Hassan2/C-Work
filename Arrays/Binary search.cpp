// Binary search algorithm........
//low position , Mid position , High position
#include<iostream>
#include<conio.h>
#include<math.h>
#include<climits>
using namespace std;
// binary search Iterative method...
int binary(int myarray[] , int searchi , int beg , int end)
{
    // binary(int myarray[] , int searchi , int beg , int end) is called the signature line of the function...
// until beg and end meet each other ...
while(beg <= end)
{
    int mid = beg + ( end - beg ) / 2;

    if (myarray[mid] == searchi)
    {
        return mid;
    }
    if (myarray[mid] < searchi)
    {
        beg = mid + 1 ;
    }
    else
    {
    end = mid - 1 ;
    }
}
}
int main()
{


     int linear[] = {1,45,67,89,90,56,34,76,45,98};
     int si;
     int pos = -1 ;
     //printing the numbers in array.....
     cout<<"The numbers in array are : "<<endl;
     for( int i = 0 ; i < 10 ; i++)
     {
        cout<<linear[i]<<" ";
        
     }
     // enter the search item.....
     cout<<"\n Enter the searching item : \n"<<endl;
     cin>>si;
     
     // finding the end point in the array.....

     int n = sizeof(linear) / (linear[0]);
     // here sizeof array is 40 as 10 values and 10 blocks are given to the 
     // array and the size of the integer is 4 and * with 10 = 40 and linear 
     // is equal to the 40 and / by (linear[0]) means that the size of the first
     //index [0] which is 4 and 40 / 4 = 10 which is the size of the array so..


     // now function call with parameter (Array , search item , starting_ , ending)
     pos = binary(linear , si , 0 , n - 1);

     // successfull or Un-successful
     if (pos == -1)
     {
        cout<<"The search failed. And the value does not found."<<endl;
     }
     else
     {
        cout<<"The value found."<<endl;
     }



getch();
return (0);
}