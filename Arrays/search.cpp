// Linear search algorithm....
#include<iostream>
#include<conio.h>
#include<math.h>
#include<climits>
using namespace std;
int main()
{


     int linearsearcharray[10] = {1,2,3,4,5,6,7,8,9,4};
     int searchnum , pos;
     // print the numbers of array.....
     for ( int i = 0 ; i < 10 ; i++)
     {
        cout<<"\nThe numbers of array are : \n"<<linearsearcharray[i]<<" ";
     }

     // Enter the search number from user...

     cout<<"\nEnter Number to be searched : \n"<<endl;
     cin>>searchnum;
// print the array and use search technique.....

     for(int i = 0 ; i < 10 ; i++)
     {
        if(linearsearcharray[i] == searchnum)
        {
            pos = i + 1;
            break;
        }
        else
        { 
            pos = 0 ;
        }

     }
// simple if condition for message showing weather the operation done or not


     if(pos != 0 )
     {
        cout<<"\nThe operation has successfully done and the positio is : \n"<<pos<<endl;

     }
     else
     {
        cout<<"\nThe searched number not found !!!!\n"<<endl;
     }




getch();
return (0);
}